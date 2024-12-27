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

SymbolTable *SymbolHier::getEntryScope(string entryName, string entryType)
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
