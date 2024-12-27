#include "SymbolTable.h"
#include "../Utils/utils.h"

SymbolTable::SymbolTable(string tableName, SymbolTable *parent)
    : tableName(tableName), parent(parent) {}

void SymbolTable::insert(SymbolTableEntry *entry)
{
    this->table[concatenateTwoStrings(entry->getVariableName(), entry->getVariableType())] = entry;
}

void SymbolTable::addChild(SymbolTable *child)
{
    this->children.push_back(child);
    child->parent = this;
}

bool SymbolTable::lookUp(string entryName, string entryType)
{
    // If no entryType is specified, try with all possible types
    if (entryType.empty())
    {
        // Iterate over all possible types and check if any entry exists with the entryName
        for (const string &type : {"int", "float", "string", "char", "bool", "void"})
        {
            string key = entryName + type;
            if (this->table.find(key) != this->table.end())
            {
                return true; // Entry found with this type
            }
        }
        return false; // No matching entry found with any type
    }
    else
    {
        // If entryType is provided, just check for that specific type
        return this->table.find(entryName + entryType) != this->table.end();
    }
}

SymbolTableEntry *SymbolTable::getEntry(string entryName, string entryType)
{
    // If entryType is provided, directly access the corresponding entry
    if (!entryType.empty())
    {
        return this->table[entryName + entryType];
    }

    // If entryType is not provided, try all types
    for (const string &type : {"int", "float", "string", "char", "bool", "void"})
    {
        string key = entryName + type;
        if (this->table.find(key) != this->table.end())
        {
            return this->table[key]; // Return the first matching entry
        }
    }

    return nullptr; // Return nullptr if no entry found
}

void SymbolTable::printTable(const string &filepath) const
{
    // Determine if we should print to a file or the console
    ostream *output = &cout; // Default to console output
    ofstream fileStream;

    if (!filepath.empty())
    {
        fileStream.open(filepath);
        if (fileStream.is_open())
        {
            output = &fileStream; // Use fileStream if file is successfully opened
        }
        else
        {
            // Handle the case where the file cannot be opened, e.g., log an error
            cerr << "Failed to open file: " << filepath << endl;
            return;
        }
    }

    // Now print the table (to either console or file)
    *output << "Table Name: " << this->tableName << endl;

    if (this->parent)
        *output << "Parent: " << this->parent->tableName << endl;

    if (this->children.size() > 0)
    {
        *output << "Children: ";
        for (auto child : this->children)
        {
            *output << child->tableName << " ";
        }
        *output << endl;
    }

    *output << "Table: " << endl;
    for (auto entry : this->table)
    {
        *output << entry.first << " : " << entry.second->getVariableName() << endl;
    }

    // If we used a file stream, close it
    if (fileStream.is_open())
    {
        fileStream.close();
    }
}
