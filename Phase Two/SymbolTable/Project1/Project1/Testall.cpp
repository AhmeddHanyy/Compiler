#include "../../../SymbolHier/SymbolHier.h"
#include <iostream>
#include <cassert>
#include <vector>
 

void testUpdateCurrentScope() {
    SymbolHier symbolHier;

    SymbolTable* newTable = new SymbolTable((char*)"NewScope",nullptr);
    symbolHier.updateCurrentScope(newTable);

    // Verify that currentScopeTable is now set to newTable
    assert(symbolHier.currentScopeTable == newTable);
    std::cout << "testUpdateCurrentScope passed!" << std::endl;
}
void testAddSymbolTable() {
    SymbolHier symbolHier;
    SymbolTable* newTable = new SymbolTable((char*)"NewScope",nullptr);

    symbolHier.addSymbolTable(newTable);

    // Verify that SymbolTables contains the new table
    assert(symbolHier.SymbolTables.find((char*)"NewScope") != symbolHier.SymbolTables.end());
    std::cout << "testAddSymbolTable passed!" << std::endl;
}
void testAddEntryToCurrentScope() {
    SymbolHier symbolHier;
    SymbolTable* newTable = new SymbolTable((char*)"NewScope",nullptr);

    symbolHier.updateCurrentScope(newTable);

    char* name = (char*)"myVar";
    char* type = (char*)"int";
    char* initialValue = (char*)"5";
    bool initialized = true;
    bool constant = false;

    symbolHier.addEntryToCurrentScope(name, type, initialValue, initialized, constant);

    // Assuming SymbolTable has a method to retrieve an entry by name and type
    SymbolTableEntry* entry = newTable->getEntry(name, type);

    // Verify that the entry was added correctly
    assert(entry != nullptr);
    assert(strcmp(entry->getVariableName(), name) == 0);
    std::cout << "testAddEntryToCurrentScope passed!" << std::endl;
}

void testGetEntryScope() {
    SymbolHier symbolHier;
    SymbolTable* newTable = new SymbolTable((char*)"NewScope",nullptr);

    symbolHier.updateCurrentScope(newTable);

    char* name = (char*)"myVar";
    char* type = (char*)"int";
    symbolHier.addEntryToCurrentScope(name, type, (char*)"5", true, false);

    // Try to find the entry scope
    SymbolTable* scope = symbolHier.getEntryScope(name, type);

    // Verify that the correct scope is returned
    assert(scope == newTable);
    std::cout << "testGetEntryScope passed!" << std::endl;
}

void testCheckFunctionExists() {
    SymbolHier symbolHier;
    char* functionName = (char*)"myFunction";
    char* returnType = (char*)"int";
    char* params = (char*)"5,\"aa\"";

    // Create a SymbolTable for functions
    SymbolTable* functionTable = new SymbolTable((char*)functionName,nullptr,(char*)"int");

    // Add functionTable to the symbol hierarchy
    symbolHier.addFunctionTable(functionTable);
    SymbolTableEntry* param1 = new SymbolTableEntry((char*)"param1", (char*)"int", (char*)"", true, false);
    SymbolTableEntry* param2 = new SymbolTableEntry((char*)"param2", (char*)"float", (char*)"", true, false);

    functionTable->insert(param1);
    functionTable->insert(param2);

    // Create a function entry (assuming SymbolTableEntry has a constructor for functions)
    char* reason = nullptr;

    // Test with matching parameters
    SymbolTable* foundTable = symbolHier.checkFunctionExists(functionName, params,reason);
    assert(foundTable != nullptr);  // We should find the function

    std::cout << "testCheckFunctionExists passed!" << std::endl;
}




int main() {
    testUpdateCurrentScope();
    testAddSymbolTable();
    testAddEntryToCurrentScope();
    testGetEntryScope();
    testCheckFunctionExists();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
