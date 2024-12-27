// SymbolTableEntry.h
#pragma once
#include <string>
#include <iostream>
using namespace std;

class SymbolTableEntry {
private:
    string variableName;
    string variableType;
    string value;
    bool isInitialized;
    bool isConstant;
    bool isAccessed;

public:
    // Constructor
    SymbolTableEntry(const string& name, const string& type, const string& initialValue = "", bool initialized = false, bool constant = false);

    // Accessor methods
    string getVariableName() const;
    string getVariableType() const;
    string getValue() const;
    bool getIsInitialized() const;
    bool getIsConstant() const;
    bool getIsAccessed() const;

    // Mutator methods
    void setValue(const string& newValue);
    void setIsInitialized(bool initialized);
    void setIsAccessed(bool Accessed);

    // Utility methods
    string toString() const;
    ~SymbolTableEntry();
};
