#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
#include <vector>
#include <utility>
#include "../SymbolTableEntry/SymbolTableEntry.h"
#include "../SemanticChecker/SemanticChecker.h"

class SymbolTable
{
public:
    char *tableName;
    char *returnType; // null for normal, not null for functional
    unordered_map<string, SymbolTableEntry *> table;
    vector<pair<char *, SymbolTableEntry *>> orderedTable;
    SymbolTable *parent;
    vector<SymbolTable *> children; // will be used for base class only

    SymbolTable(char *tableName, SymbolTable *parent, char *type = nullptr);
    void insert(SymbolTableEntry *entry);
    virtual void addChild(SymbolTable *child); // for global scope so we should implement in base class
    bool lookUp(char *entryName, char *entryType);
    SymbolTableEntry *getEntry(char *entryName, char *entryType = (char *)"");
    bool validateReturnType(char *result);
    virtual void printTable(const string &filepath = "") const;
};

/*
scope - > contains scopes only not functions
functions -> contains scopes only not functions
except for global Scope contains functions and other scopes


*/