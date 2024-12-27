#include "SymbolTable.h"
#include <iostream>
#include <cassert>
#include <sstream>

void testSymbolTable() {
    // Test creating SymbolTable and inserting entries
    SymbolTable globalTable("GlobalTable", nullptr);
    SymbolTableEntry entry1("x", "int", "0", true, false);
    SymbolTableEntry entry2("y", "float", "3.14", true, false);
    
    globalTable.insert(&entry1);
    globalTable.insert(&entry2);

    // Test lookup
    assert(globalTable.lookUp("x","int") == true);
    assert(globalTable.lookUp("y","float") == true);
    assert(globalTable.lookUp("z","float") == false);  // Non-existent entry

    // Test getting entries
    assert(globalTable.getEntry("x","int")->getVariableName() == "x");
    assert(globalTable.getEntry("y","float")->getVariableName() == "y");

    // Test parent-child relationships
    SymbolTable childTable("ChildTable", &globalTable);
    globalTable.addChild(&childTable);
    
    assert(childTable.parent == &globalTable);  // Check parent reference
    assert(globalTable.children.size() == 1);   // Ensure the child was added

    SymbolTableEntry entry3("z", "char", "'a'", true, false);
    globalTable.insert(&entry3);

    // Overload printTable to print to stringstream
    globalTable.printTable();

    // Test if table details are printed correctly
    string expectedOutput = "Table Name: GlobalTable\n"
                                 "Table: \n"
                                 "x : int\n"
                                 "y : float\n"
                                 "z : char\n";
    cout<< "Expected:" << expectedOutput <<endl;                            
    cout << "All tests passed for SymbolTable!\n";
}

int main() {
    testSymbolTable();
    return 0;
}
