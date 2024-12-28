#include "SymbolHier.h"

// SymbolHier::SymbolHier()
// {
// }

void SymbolHier::updateCurrentScope(SymbolTable *newTable)
{
    this->currentScopeTable = newTable;
}
void SymbolHier::addSymbolTable(SymbolTable *newTable)
{
    // Here we just add assuming the newTable is set correclty for parent and child
    this->SymbolTables[newTable->tableName] = newTable;
}

void SymbolHier::addEntryToCurrentScope(char *name, char *type, char *initialValue, bool initialized, bool constant)
{
    SymbolTableEntry *entry = new SymbolTableEntry(name, type, initialValue, initialized, constant);
    this->currentScopeTable->insert(entry);
}

SymbolTable *SymbolHier::getEntryScope(char* entryName, char* entryType)
{
    SymbolTable *current = this->currentScopeTable;
    while (current != nullptr)
    {
        bool isFound = current->lookUp(entryName, entryType);
        if (isFound)
        {
            return current;
        }
        current = current->parent;
    }
    return nullptr;
}

void SymbolHier::printAllTables(string filename) const
{
    // Output the symbol tables to either the console or a file
    ostream *output = &cout; // Default to console output
    ofstream fileStream;

    if (!filename.empty())
    {
        fileStream.open(filename);
        if (fileStream.is_open())
        {
            output = &fileStream; // Use fileStream if the file is opened
        }
        else
        {
            cerr << "Failed to open file: " << filename << endl;
            return;
        }
    }

    // Iterate over the unordered_map of symbol tables
    for (auto &pair : this->SymbolTables)
    {
        pair.second->printTable(filename); // Assuming printTable prints the table's content
    }

    if (fileStream.is_open())
    {
        fileStream.close();
    }
}

SymbolTable* SymbolHier::checkFunctionExists(char* functionName, char* paramsBucket,char*& reason)
{
    // Iterate over the vector of function tables
    for (auto &functionTable : Functions)
    {
        // First, check if the function name matches
        if (functionTable->tableName != functionName) {
            if(!reason)
                reason = const_cast<char*>("Function does not exist");
            continue; // Skip if function names don't match
        }
        

    
        // Now, we need to compare the parameters in the correct order
        // Assume paramsBucket is a comma-separated string of parameter types
        vector<char*> functionParams;  // Parameters of the function in the symbol table
        
        // Extract the function parameters from the function symbol table (assumed to be stored in `orderedTable`)
        for (auto &entry : functionTable->orderedTable) {
            functionParams.push_back(entry.second->getVariableType()); // Get each parameter's type
        }
        
        // Split paramsBucket into individual parameters
        vector<char*> valuesBucket = splitString(paramsBucket,','); //should be values
        //now we need to convert those values to types
        if (valuesBucket.size() != functionParams.size()){ 
            reason = const_cast<char*>("Parameters not matching");
            continue;
        }
        SemanticChecker checker;
        vector<char*> typesBucket;
        for(int i =0;i<valuesBucket.size();i++)
            typesBucket.push_back(checker.determineType(valuesBucket[i]));      
            
        bool paramsMatch = true;

        for (size_t i = 0; i < functionParams.size(); ++i) {
            if (functionParams[i] != typesBucket[i]) {
                paramsMatch = false; // Parameters don't match
                reason = const_cast<char*>("Parameters not matching");
                break;
            }
        }

            if (paramsMatch) {
                reason = nullptr;
                return functionTable; // Function found with matching name, return type, and parameters
            }
        }

    return nullptr; // No matching function found
}

void SymbolHier:: addFunctionTable(SymbolTable* function){
Functions.push_back(function);
this->addSymbolTable(function);
}