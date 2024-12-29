#include "SymbolTable.h"
#include "../Utils/utils.h"

SymbolTable::SymbolTable(char *tableName, SymbolTable *parent, char *type)
    : tableName(tableName), parent(parent), returnType(type) {}

void SymbolTable::insert(SymbolTableEntry *entry)
{
    if (returnType)
    {
        // For function tables, maintain insertion order
        orderedTable.emplace_back(concatenateTwoStrings(entry->getVariableName(), entry->getVariableType(), ' '), entry);
        return;
    }
    this->table[concatenateTwoStrings(entry->getVariableName(), entry->getVariableType(), ' ')] = entry;
}

void SymbolTable::addChild(SymbolTable *child)
{
    this->children.push_back(child);
    child->parent = this;
}

bool SymbolTable::lookUp(char *entryName, char *entryType)
{
    // If no entryType is specified, try with all possible types
    if (strcmp(entryType, "") == 0)
    {
        // Iterate over all possible types and check if any entry exists with the entryName
        for (const char *type : {"int", "float", "string", "char", "bool", "void"})
        {
            // Allocate memory for the type string
            size_t len = strlen(type) + 1; // +1 for the null-terminator
            char *typeCopy = new char[len];

            // Use strcpy_s to copy the string safely
            strcpy_s(typeCopy, len, type);

            char *key = concatenateTwoStrings(entryName, typeCopy, ' ');
            if (returnType)
            {
                // Search in orderedTable
                for (const auto &entry : orderedTable)
                {
                    if (strcmp(entry.first, key) == 0)
                        return true;
                }
            }
            else
            {
                if (this->table.find(key) != this->table.end())
                {
                    return true; // Entry found with this type
                }
            }
        }
        return false; // No matching entry found with any type
    }
    else
    {
        if (returnType)
        {
            // Search in orderedTable
            for (const auto &entry : orderedTable)
            {
                if (strcmp(entry.first, concatenateTwoStrings(entryName, entryType, ' ')) == 0)
                    return true;
            }
            return false;
        }
        // If entryType is provided, just check for that specific type
        return this->table.find(concatenateTwoStrings(entryName, entryType, ' ')) != this->table.end();
    }
}

SymbolTableEntry *SymbolTable::getEntry(char *entryName, char *entryType)
{
    // If entryType is provided, directly access the corresponding entry
    if (lookUp(entryName, entryType))
    {
        if (strcmp(entryType, "") != 0)
        {
            if (returnType)
            {
                // Search in orderedTable
                for (const auto &entry : orderedTable)
                {
                    if (strcmp(entry.first, concatenateTwoStrings(entryName, entryType, ' ')) == 0)
                        return entry.second;
                }
            }
            else
                return this->table[concatenateTwoStrings(entryName, entryType, ' ')];
        }

        // If entryType is not provided, try all types
        for (const char *type : {"int", "float", "string", "char", "bool", "void"})
        {
            // Allocate memory for the type string
            size_t len = strlen(type) + 1; // +1 for the null-terminator
            char *typeCopy = new char[len];

            // Use strcpy_s to copy the string safely
            strcpy_s(typeCopy, len, type);

            char *key = concatenateTwoStrings(entryName, typeCopy, ' ');
            if (returnType)
            {
                // Search in orderedTable
                for (const auto &entry : orderedTable)
                {
                    if (strcmp(entry.first, key) == 0)
                        return entry.second;
                }
            }
            else
            {
                if (this->table.find(key) != this->table.end())
                {
                    return this->table[key]; // Return the first matching entry
                }
            }
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
    *output << (returnType ? "Function Name: " : "Table Name: ") << tableName << endl;
    if (returnType)
        *output << "Return Type: " << returnType << endl;

    if (this->parent)
        *output << "Parent: " << this->parent->tableName << endl;

    if (this->children.size() > 0)
    {
        *output << "Children Scopes: ";
        for (auto child : this->children)
        {
            *output << child->tableName << " ";
        }
        *output << endl;
    }

    *output << "Table: " << endl;
    if (returnType)
    {
        // Print ordered table for function
        for (const auto &entry : orderedTable)
            *output << entry.first << " : " << entry.second->getVariableName() << " (Parameter)" << endl;
    }
    else
    {
        // Print unordered table for normal
        for (const auto &entry : table)
            *output << entry.first << " : " << entry.second->getVariableName() << endl;
    }

    // If we used a file stream, close it
    if (fileStream.is_open())
    {
        fileStream.close();
    }
}
