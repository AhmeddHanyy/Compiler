#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
#include <vector>
#include "../SymbolTableEntry/SymbolTableEntry.h"

class SymbolTable
{
public:
    string tableName;
    unordered_map<string, SymbolTableEntry *> table;
    SymbolTable *parent;
    vector<SymbolTable *> children; // will be used for base class only

    SymbolTable(string tableName, SymbolTable *parent);
    void insert(SymbolTableEntry *entry);
    virtual void addChild(SymbolTable *child); // for global scope so we should implement in base class
    bool lookUp(string entryName, string entryType);
    SymbolTableEntry *getEntry(string entryName, string entryType = "");
    virtual void printTable(const string &filepath = "") const;
};

/*
scope - > contains scopes only not functions
functions -> contains scopes only not functions
except for global Scope contains functions and other scopes


*/