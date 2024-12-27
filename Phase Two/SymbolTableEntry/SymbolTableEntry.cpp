// SymbolTableEntry.cpp
#include "SymbolTableEntry.h"
#include <sstream>

// Constructor
SymbolTableEntry::SymbolTableEntry(const string& name, const string& type, const string& initialValue, bool initialized, bool constant)
    : variableName(name), variableType(type), value(initialValue), isInitialized(initialized), isConstant(constant), isAccessed(false) {}

// Accessor methods
string SymbolTableEntry::getVariableName() const {
    return variableName;
}

string SymbolTableEntry::getVariableType() const {
    return variableType;
}

string SymbolTableEntry::getValue() const {
    return value;
}

bool SymbolTableEntry::getIsInitialized() const {
    return isInitialized;
}

bool SymbolTableEntry::getIsConstant() const {
    return isConstant;
}

bool SymbolTableEntry::getIsAccessed() const {
    return isAccessed;
}

// Mutator methods
void SymbolTableEntry::setValue(const string& newValue) {
    value = newValue;
}

void SymbolTableEntry::setIsInitialized(bool initialized) {
    isInitialized = initialized;
}

void SymbolTableEntry::setIsAccessed(bool Accessed) {
    isAccessed = Accessed;
}

// Utility methods
string SymbolTableEntry::toString() const {
    ostringstream oss;
    oss << "Variable Name: " << variableName
        << ", Type: " << variableType
        << ", Value: " << value
        << ", Initialized: " << (isInitialized ? "Yes" : "No")
        << ", Constant: " << (isConstant ? "Yes" : "No")
        << ", Accessed: " << (isAccessed ? "Yes" : "No");
    return oss.str();
}

// Destructor
SymbolTableEntry::~SymbolTableEntry() {
    // No dynamic memory to clean up
}
