#include <iostream>
#include <cassert>
#include "SymbolHier.h"


int main() {
    // Create the SymbolHier and some SymbolTables
    SymbolHier symbolHier;

    // Create a global symbol table and add it to the hierarchy
    SymbolTable* globalTable = new SymbolTable("Global",nullptr);
    symbolHier.addSymbolTable(globalTable);

    // Create a local symbol table (child of globalTable)
    SymbolTable* localTable1 = new SymbolTable("Local1", globalTable);
    globalTable->addChild(localTable1);
    symbolHier.addSymbolTable(localTable1);

    SymbolTable* localTable2 = new SymbolTable("Local2", globalTable);
    symbolHier.addSymbolTable(localTable2);
    globalTable->addChild(localTable2);
    // Set the current scope to global
    symbolHier.updateCurrentScope(globalTable);

    // Add entries to both global and local scopes
    symbolHier.addEntryToCurrentScope("globalVar", "int", "10", true, false);  // in global scope
    symbolHier.updateCurrentScope(localTable1);
    symbolHier.addEntryToCurrentScope("localVar1", "int", "5", true, false);  // in localTable1
    symbolHier.updateCurrentScope(localTable2);
    symbolHier.addEntryToCurrentScope("localVar2", "int", "7", true, false);  // in localTable2

    // Test lookUp and getEntryScope
    SymbolTable* entryScope = symbolHier.getEntryScope("globalVar", "int");
    assert(entryScope->tableName == globalTable->tableName); // Should find it in global scope

    entryScope = symbolHier.getEntryScope("localVar1", "int");
    assert(entryScope == nullptr); // Should find it in localTable1

    entryScope = symbolHier.getEntryScope("localVar2", "int");
    assert(entryScope->tableName== localTable2->tableName); // Should find it in localTable2

    // Test printAllTables (prints to console by default)
    cout << "Printing all tables:" << endl;
    symbolHier.printAllTables("");  // Print to console
    
    // Test saving the output to a file
    symbolHier.printAllTables("symbol_tables.txt");

    cout << "All tests passed!" << endl;

    return 0;
}
