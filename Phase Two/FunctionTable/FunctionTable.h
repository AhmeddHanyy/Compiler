#pragma once
#include "../SymbolTable/SymbolTable.h"
#include <vector>
#include <string>

class FunctionTable : public SymbolTable {
public:
    // Attributes specific to FunctionTable
    string returnType;  // The return type of the function
    vector<pair<string, string>> parameters;  // List of parameter names and types

    // Constructor that initializes the table name, parent, and return type
    FunctionTable(string tableName, SymbolTable* parent, string returnType);

    // Method to add a parameter with its name and type
    void addParameter(const string& name, const string& type);

    // Method to get the function's return type
    string getReturnType() const;

    // Method to get the list of parameters
    vector<pair<string, string>> getParameters() const;

    // Override the printTable method to include return type and parameters
    void printTable(const string& filepath = "") const override;
};