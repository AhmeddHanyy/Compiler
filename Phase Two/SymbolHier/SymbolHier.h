#include "../Utils/utils.h"
#include "../SymbolTable/SymbolTable.h"
#include "../SemanticChecker/SemanticChecker.h"
#include <unordered_map>

// We need to keep a global pointer outside of this
class SymbolHier
{
public:
    SymbolTable *currentScopeTable;                    // This is a pointer to where we are. We can be inside a normal scope or a function
    unordered_multimap<string, SymbolTable*> SymbolTables; // This map contains all tables including scopes and functions all on the same level no hier
    vector<SymbolTable*> Functions;
    // SymbolHier();
    // This function will be called frequently on entering or leaving
    void updateCurrentScope(SymbolTable *newTable);

    void addSymbolTable(SymbolTable *newTable);

    void addEntryToCurrentScope(char *name, char *type, char *initialValue, bool initialized, bool constant);

    // Search for entry starting from current to all ancestors
    // Note: If I want to search for it in current scope only use the lookup function not this
    SymbolTable *getEntryScope(char* entryName, char* entryType = (char*)"");

    void printAllTables(string filename = "") const;
    SymbolTable* checkFunctionExists(char* functionName,char* paramsBucket,char*& reason);
    void addFunctionTable(SymbolTable* function);
};