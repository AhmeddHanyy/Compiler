// SymbolTableEntry.cpp
#include "SymbolTableEntry.h"
#include <sstream>

// Constructor
SymbolTableEntry::SymbolTableEntry(char *name, char *type, char *initialValue, bool initialized, bool constant)
    : variableName(name), variableType(type), value(initialValue), isInitialized(initialized), isConstant(constant), isAccessed(false) {}

// Accessor methods
char *SymbolTableEntry::getVariableName()
{
    return variableName;
}

char *SymbolTableEntry::getVariableType()
{
    return variableType;
}

char *SymbolTableEntry::getValue()
{
    return value;
}

bool SymbolTableEntry::getIsInitialized()
{
    return isInitialized;
}

bool SymbolTableEntry::getIsConstant()
{
    return isConstant;
}

bool SymbolTableEntry::getIsAccessed()
{
    return isAccessed;
}

// Mutator methods
void SymbolTableEntry::setValue(char *newValue)
{
    value = newValue;
}

void SymbolTableEntry::setIsInitialized(bool initialized)
{
    isInitialized = initialized;
}

void SymbolTableEntry::setIsAccessed(bool Accessed)
{
    isAccessed = Accessed;
}

// Destructor
SymbolTableEntry::~SymbolTableEntry()
{
    // No dynamic memory to clean up
}
