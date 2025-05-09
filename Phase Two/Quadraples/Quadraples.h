#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <list>
#include <stack>
#include <vector>
#include <fstream>
using namespace std;

struct QuadrapleEntry
{
    /* data */
    string operation;
    string arg1;
    string arg2;
    string result;
    string label;

    QuadrapleEntry(string operation, string arg1, string arg2, string result, string label = "")
    {
        this->operation = operation;
        this->arg1 = arg1;
        this->arg2 = arg2;
        this->result = result;
        this->label = "";
    }

    void printEntry()
    {
        cout << this->label << this->operation << " " << this->arg1 << " " << this->arg2 << " " << this->result << endl;
    }
};

class Quadraples
{
private:
    /* data */
    list<QuadrapleEntry *> quadraples;
    list<QuadrapleEntry *> quadraples_functions;
    int entryCount = 0;
    int labelCount = 0;
    int lineCount = 0;
    int loopCount = 0;
    stack<string> labels;
    stack<string> lines;                 // for branching statements line1: line2: etc
    vector<list<string>> lines_list_vec; // we use it to pop back the lines for the if else statements to handle nested if else
    stack<string> loops;                 // for loops
    /// Switch case
    list<string> casesIDs;

    void incEntryCount();
    void incrementLabelCount();
    string generateLabel(const string &prefix, int count) const;

public:
    int currentListIndex = -1; // for nested if else
    int isFunctionFlag = 0;

    Quadraples();
    void insertEntry(const string &operation, const string &arg1, const string &arg2, const string &result);
    void insertVariable(string name);
    void pushLabel(char *label);
    void popLabel();
    char *getTopLabel();
    int getLabelsLength();
    void addUnary(char *operation, char *result, bool hasLabel = false);
    void addBinary(char *operation, char *result);
    char *addBranch(char *jumpType);
    void addLine();
    void addNestedLine();

    void addLineStart();

    void addLoopStart();
    void endLoop();
    void addEndLoop(char *line);

    void incrementLineCount();
    void addJumpOp();
    void clearVariablesStack();
    char *generateTempVar();
    char *getCurrentLine();
    char *getCurrentLoop();
    int getLineCountinStack();
    void printQuadraples() const;
    void resetEntryCount();
    void resetLabelCount();

    // Switch case
    void insertCase(char *caseValue);
    void jumpStartCase();
    void addJS();
    void addJE();
    void addLineCase();
    void insertCaseID(char *caseValue);
    void processCases(char *switchValue);

    void printQuadraplesToFile(char *filename) const;
    ~Quadraples();
};
