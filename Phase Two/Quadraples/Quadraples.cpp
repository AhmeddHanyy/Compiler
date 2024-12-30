#include "Quadraples.h"

Quadraples::Quadraples()
{
    this->lines_list_vec.resize(100);
}

string Quadraples::generateLabel(const string &prefix, int count) const
{
    return prefix + to_string(count);
}

void Quadraples::insertEntry(const string &operation, const string &arg1, const string &arg2, const string &result)
{
    printf("insertEntry: Inserting entry: %s %s %s %s\n", operation.c_str(), arg1.c_str(), arg2.c_str(), result.c_str());
    QuadrapleEntry *entry = new QuadrapleEntry(operation, arg1, arg2, result);
    if (isFunctionFlag == 0)
    {
        quadraples.push_back(entry);
    }
    else
    {
        quadraples_functions.push_back(entry);
    }
    incEntryCount();
}

void Quadraples::addUnary(char *operation, char *result, bool hasLabel)
{
    // convert char* to string
    string res(result);
    string op(operation);
    printf("Adding unary operation: %s %s\n", operation, result);

    // pop the last label from the stack
    if (hasLabel)
    {
        res = labels.top();
        popLabel();
    }
    string arg1 = labels.top();
    popLabel();
    // create a new entry
    insertEntry(op, arg1, "", res);
    printf("Inserted entry: %s %s %s %s\n", op.c_str(), arg1.c_str(), "", res.c_str());
}

void Quadraples::addBinary(char *operation, char *result)
{
    // convert char* to string
    string res(result);
    string op(operation);

    // pop the last two labels from the stack
    string arg2 = labels.top();
    popLabel();
    string arg1 = labels.top();
    popLabel();

    // create a new entry
    insertEntry(op, arg1, arg2, res);
    pushLabel(strdup(res.c_str()));
}

char *Quadraples::addBranch(char *jumpType)
{
    // convert char* to string
    string jump(jumpType);

    // get the line label
    string line = generateLabel("Line", lineCount);
    incEntryCount();
    lines.push(line);
    ++lineCount;

    // pop the last two labels from the stack
    string arg2 = labels.top();
    popLabel();
    string arg1 = labels.top();
    popLabel();

    // check the jump type and insert the appropriate entry
    string jmp;
    if (strcmp(jumpType, ">") == 0)
        jmp = "JLE";
    else if (strcmp(jumpType, "<") == 0)
        jmp = "JGE";
    else if (strcmp(jumpType, "==") == 0)
        jmp = "JNE";
    else if (strcmp(jumpType, "!=") == 0)
        jmp = "JE";
    else if (strcmp(jumpType, ">=") == 0)
        jmp = "JLT";
    else if (strcmp(jumpType, "<=") == 0)
        jmp = "JGT";

    insertEntry("CMP", arg1, arg2, "");
    insertEntry(jmp, "", "", line);
    return strdup(line.c_str());
}

void Quadraples::addLine()
{
    if (lines.empty())
        return;
    string line = lines.top() + ":";
    lines.pop();
    insertEntry(line, "", "", "");
}

void Quadraples::addNestedLine()
{
    if (currentListIndex == -1 || lines_list_vec[currentListIndex].empty())
        return;
    string line = lines_list_vec[currentListIndex].back() + ":";
    lines_list_vec[currentListIndex].pop_back();
    insertEntry(line, "", "", "");
}

void Quadraples::addLoopStart()
{
    string loop = generateLabel("Loop", loopCount);
    ++loopCount;
    insertEntry(loop + ":", "", "", "");
    loops.push(loop);
}

void Quadraples::endLoop()
{
    printf("loops.empty(): %d, lines.empty(): %d\n", loops.empty(), lines.empty());
    if (loops.empty() || lines.empty())
        return;
    string loop = loops.top();
    string line = lines.top();
    loops.pop();
    lines.pop();
    insertEntry("JMP", "", "", loop);
    insertEntry(line + ":", "", "", "");
}

void Quadraples::addEndLoop(char *line)
{
    string temp_line(line);

    if (temp_line.find("INC ") == 0)
    {
        string variable = temp_line.substr(4);
        insertEntry("INC", variable, "", "");
    }
    else if (temp_line.find("DEC ") == 0)
    {
        string variable = temp_line.substr(4);
        insertEntry("DEC", variable, "", "");
    }
    else if (!temp_line.empty())
    {
        addUnary("MOV", line);
    }
    endLoop();
}

void Quadraples::addJumpOp()
{
    string line = generateLabel("Line", lineCount);
    ++lineCount;
    // push the line to the stack
    lines_list_vec[currentListIndex].push_front(line);
    insertEntry("JMP", "", "", line);
}

void Quadraples::insertCase(char *caseValue)
{
    string case_type(caseValue);
    insertEntry("CASE", case_type + ":", "", "");
}

void Quadraples::addJS()
{
    insertEntry("JMP", "Startswitch:", "", "");
}

void Quadraples::addJE()
{
    insertEntry("JMP", "Endcase:", "", "");
}

void Quadraples::addLineCase()
{
    insertEntry("Endcase:", "", "", "");
}

void Quadraples::insertCaseID(char *caseValue)
{
    string case_type(caseValue);
    casesIDs.push_back(case_type);
}

void Quadraples::processCases(char *switchValue)
{
    insertEntry("Startswitch:", "", "", "");
    for (const auto &case_type : casesIDs)
    {
        insertEntry("CMP", case_type, switchValue, "");
        insertEntry("JEQ", "", "", "case " + case_type);
    }
    insertEntry("JMP", "", "", "default");
    casesIDs.clear();
}

char *Quadraples::generateTempVar()
{
    std::string label = generateLabel("T", entryCount);
    char *labelPtr = new char[label.length() + 1]; // +1 for null terminator
    strcpy(labelPtr, label.c_str());
    return labelPtr;
}

void Quadraples::pushLabel(char *label)
{
    string labelStr(label);
    printf("-->Pushing label: %s\n", labelStr.c_str());
    labels.push(labelStr);

    printf("--Labels stack:--\n");
    stack<string> temp = labels;
    while (!temp.empty())
    {
        printf("%s ", temp.top().c_str());
        temp.pop();
    }
    printf("\n---------\n");
}

void Quadraples::popLabel()
{
    string label = labels.top();
    printf("<--Popping label: %s\n", label.c_str());
    labels.pop();

    printf("--Labels stack:--\n");
    stack<string> temp = labels;
    while (!temp.empty())
    {
        printf("%s ", temp.top().c_str());
        temp.pop();
    }
    printf("\n---------\n");
}

char *Quadraples::getTopLabel()
{
    string label = labels.top();
    return strdup(label.c_str());
}

int Quadraples::getLabelsLength()
{
    return labels.size();
}

void Quadraples::incEntryCount()
{
    this->entryCount++;
}

void Quadraples::resetEntryCount()
{
    this->entryCount = 0;
}

void Quadraples::resetLabelCount()
{
    this->labelCount = 0;
}

void Quadraples::printQuadraples() const
{
    for (const auto &quad : quadraples_functions)
    {
        quad->printEntry();
    }
    for (const auto &quad : quadraples)
    {
        quad->printEntry();
    }
}

void Quadraples::printQuadraplesToFile(char *filename) const
{
    printf("Printing quadraples to file: %s\n", filename);
    std::string file_name(filename);
    std::ofstream file(file_name);
    if (!file.is_open())
    {
        // Handle error
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    for (const auto &quad : this->quadraples_functions)
    {
        file << quad->label << " "
             << quad->operation << " "
             << quad->arg1 << " "
             << quad->arg2 << " "
             << quad->result << std::endl;

        file.flush();
    }

    for (const auto &quad : this->quadraples)
    {
        file << quad->label << " "
             << quad->operation << " "
             << quad->arg1 << " "
             << quad->arg2 << " "
             << quad->result << std::endl;

        file.flush();
    }

    file.close();
}

Quadraples::~Quadraples()
{
    for (auto quad : quadraples)
    {
        delete quad;
    }
    for (auto quad : quadraples_functions)
    {
        delete quad;
    }
}
