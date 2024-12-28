#include "SymbolTable.h"
#include <iostream>
#include <cassert>
using namespace std;

void testSymbolTable() {
    // Create a SymbolTable
    SymbolTable globalTable((char*)"Global", nullptr, nullptr);

    // Insert entries into the table
    SymbolTableEntry* entry1 = new SymbolTableEntry((char*)"var1", (char*)"int", (char*)"0", true, false);
    SymbolTableEntry* entry2 = new SymbolTableEntry((char*)"var2", (char*)"float", (char*)"0.0", true, false);
    SymbolTableEntry* entry3 = new SymbolTableEntry((char*)"var3", (char*)"string", (char*)"\"hello\"", true, false);

    globalTable.insert(entry1);
    globalTable.insert(entry2);
    globalTable.insert(entry3);

    bool res = globalTable.lookUp((char*)"var1", (char*)"int");
    assert(globalTable.lookUp((char*)"var1", (char*)"int") == true); // Found
    assert(globalTable.lookUp((char*)"var2", (char*)"float") == true); // Found
    assert(globalTable.lookUp((char*)"var3", (char*)"string") == true); // Found
    assert(globalTable.lookUp((char*)"var4", (char*)"int") == false); // Not found
    assert(globalTable.lookUp((char*)"var1", (char*)"") == true); // No type provided, should find "var1int"

    // Test getEntry method
    SymbolTableEntry* fetchedEntry = globalTable.getEntry((char*)"var1", (char*)"int");
    assert(fetchedEntry != nullptr && fetchedEntry->getVariableName() == (char*)"var1");

    fetchedEntry = globalTable.getEntry((char*)"var2", (char*)"float");
    assert(fetchedEntry != nullptr && fetchedEntry->getVariableName() == (char*)"var2");

    fetchedEntry = globalTable.getEntry((char*)"var1", (char*)""); // No type provided
    assert(fetchedEntry != nullptr && fetchedEntry->getVariableName() == "var1");

    fetchedEntry = globalTable.getEntry((char*)"var4", (char*)"int"); // Non-existent entry
    assert(fetchedEntry == nullptr);

    // Create child SymbolTable
    SymbolTable childTable((char*)"Child", &globalTable, nullptr);
    SymbolTableEntry* childEntry = new SymbolTableEntry((char*)"childVar", (char*)"char", (char*)"'c'", true, false);
    childTable.insert(childEntry);
    globalTable.addChild(&childTable);

    // Test lookUp on child table
    assert(childTable.lookUp((char*)"childVar", (char*)"char") == true); // Found
    assert(globalTable.lookUp((char*)"childVar", (char*)"char") == false); // Not in the global scope

    // Test printing to console
    cout << "Printing Global Symbol Table to Console:" << endl;
    globalTable.printTable("");

    // Test printing to a file
    string filepath = "symbol_table.txt";
    globalTable.printTable(filepath);
    cout << "Symbol Table printed to " << filepath << endl;

    // Cleanup
    delete entry1;
    delete entry2;
    delete entry3;
    delete childEntry;
}
void testFunctionSymbolTable() {
    // Create a SymbolTable for a function
    char returnType[] = "int";
    SymbolTable functionTable((char*)"myFunction", nullptr, returnType);

    // Insert parameters into the function table
    SymbolTableEntry* param1 = new SymbolTableEntry((char*)"param1", (char*)"int", (char*)"", true, false);
    SymbolTableEntry* param2 = new SymbolTableEntry((char*)"param2", (char*)"float", (char*)"", true, false);

    functionTable.insert(param1);
    functionTable.insert(param2);

    // Insert a local variable into the function table
    SymbolTableEntry* localVar = new SymbolTableEntry((char*)"localVar", (char*)"string", (char*)"\"hello\"", true, false);
    functionTable.insert(localVar);

    // Test lookUp for parameters and local variables
    assert(functionTable.lookUp((char*)"param1", (char*)"int") == true); // Found
    assert(functionTable.lookUp((char*)"param2", (char*)"float") == true); // Found
    assert(functionTable.lookUp((char*)"localVar", (char*)"string") == true); // Found
    assert(functionTable.lookUp((char*)"param1", (char*)"") == true); // Found with unspecified type
    assert(functionTable.lookUp((char*)"param3", (char*)"int") == false); // Not found

    // Test getEntry for parameters and local variables
    SymbolTableEntry* fetchedEntry = functionTable.getEntry((char*)"param1", (char*)"int");
    assert(fetchedEntry != nullptr && fetchedEntry->getVariableName() == (char*)"param1");

    fetchedEntry = functionTable.getEntry((char*)"param2", (char*)"float");
    assert(fetchedEntry != nullptr && fetchedEntry->getVariableName() == (char*)"param2");

    fetchedEntry = functionTable.getEntry((char*)"localVar", (char*)"string");
    assert(fetchedEntry != nullptr && fetchedEntry->getVariableName() == (char*)"localVar");

    fetchedEntry = functionTable.getEntry((char*)"param1", (char*)""); // Unspecified type
    assert(fetchedEntry != nullptr && fetchedEntry->getVariableName() == (char*)"param1");

    fetchedEntry = functionTable.getEntry((char*)"param3", (char*)"int"); // Non-existent entry
    assert(fetchedEntry == nullptr);

    // Test printing to console
    cout << "Printing Function Symbol Table to Console:" << endl;
    functionTable.printTable("");

    // Test printing to a file
    string filepath = "function_symbol_table.txt";
    functionTable.printTable(filepath);
    cout << "Function Symbol Table printed to " << filepath << endl;

    // Cleanup
    delete param1;
    delete param2;
    delete localVar;
}

