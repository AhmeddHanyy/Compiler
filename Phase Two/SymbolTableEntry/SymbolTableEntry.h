// SymbolTableEntry.h
#pragma once
#include <string>
#include <iostream>
using namespace std;

class SymbolTableEntry
{
private:
    char *variableName;
    char *variableType;
    char *value;
    bool isInitialized;
    bool isConstant;
    bool isAccessed;

public:
    // Constructor
    SymbolTableEntry(char *name, char *type, char *initialValue, bool initialized = false, bool constant = false);

    // Accessor methods
    char *getVariableName();
    char *getVariableType();
    char *getValue();
    bool getIsInitialized();
    bool getIsConstant();
    bool getIsAccessed();

    // Mutator methods
    void setValue(char *newValue);
    void setIsInitialized(bool initialized);
    void setIsAccessed(bool Accessed);

    // Utility methods
    ~SymbolTableEntry();
};
