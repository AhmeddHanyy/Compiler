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

void Quadraples::addUnary(char *operation, char *result)
{
    // convert char* to string
    string res(result);
    string op(operation);

    // pop the last label from the stack
    string arg1 = labels.top();
    labels.pop();

    // create a new entry
    insertEntry(op, arg1, "", res);
    labels.push(res);
}

void Quadraples::addBinary(char *operation, char *result)
{
    // convert char* to string
    string res(result);
    string op(operation);

    // pop the last two labels from the stack
    string arg2 = labels.top();
    labels.pop();
    string arg1 = labels.top();
    labels.pop();

    // create a new entry
    insertEntry(op, arg1, arg2, res);
    labels.push(res);
}

void Quadraples::addBranch(char *jumpType)
{
    // convert char* to string
    string jump(jumpType);

    // get the line label
    string line = generateLabel("Line", lineCount);
    incEntryCount();
    lines.push(line);

    // pop the last two labels from the stack
    string arg2 = labels.top();
    labels.pop();
    string arg1 = labels.top();
    labels.pop();

    // check the jump type and insert the appropriate entry
    string jmp;
    if (jumpType == ">")
        jmp = "JLE";
    else if (jumpType == "<")
        jmp = "JGE";
    else if (jumpType == "==")
        jmp = "JNE";
    else if (jumpType == "!=")
        jmp = "JE";
    else if (jumpType == ">=")
        jmp = "JLT";
    else if (jumpType == "<=")
        jmp = "JGT";

    insertEntry("CMP", arg1, arg2, "");
    insertEntry(jmp, "", "", line);
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

char *Quadraples::getCurrentLabel()
{
    std::string label = "T" + std::to_string(this->entryCount);
    char *labelPtr = new char[label.length() + 1]; // +1 for null terminator
    strcpy(labelPtr, label.c_str());
    return labelPtr;
}

void Quadraples::popLabel()
{
    labels.pop();
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
