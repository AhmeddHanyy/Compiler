#include "SymbolTableEntry.h"
#include <iostream>
#include <cassert>

void testSymbolTableEntry() {
    // Test constructor and accessor methods
    SymbolTableEntry entry("x", "int", "0", true, false);
    assert(entry.getVariableName() == "x");
    assert(entry.getVariableType() == "int");
    assert(entry.getValue() == "0");
    assert(entry.getIsInitialized() == true);
    assert(entry.getIsConstant() == false);
    assert(entry.getIsAccessed() == false);

    // Test mutator methods
    entry.setValue("10");
    entry.setIsInitialized(false);
    entry.setIsAccessed(true);
    assert(entry.getValue() == "10");
    assert(entry.getIsInitialized() == false);
    assert(entry.getIsAccessed() == true);

    // Test toString method
    string expectedOutput = "Variable Name: x, Type: int, Value: 10, Initialized: No, Constant: No, Accessed: Yes";
    assert(entry.toString() == expectedOutput);

    cout << "All tests passed for SymbolTableEntry!\n";
}

int main() {
    testSymbolTableEntry();
    return 0;
}
