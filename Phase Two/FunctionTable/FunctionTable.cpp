#include "FunctionTable.h"

// Constructor that initializes the table name, parent, and return type
FunctionTable::FunctionTable(string tableName, SymbolTable* parent, string returnType)
    : SymbolTable(tableName, parent), returnType(returnType) {}

// Method to add a parameter with its name and type
void FunctionTable::addParameter(const string& name, const string& type) {
    parameters.push_back(make_pair(name, type));
}

// Method to get the function's return type
string FunctionTable::getReturnType() const {
    return returnType;
}

// Method to get the list of parameters
vector<pair<string, string>> FunctionTable::getParameters() const {
    return parameters;
}

// Override the printTable method to include return type and parameters
void FunctionTable::printTable(const string& filepath) const {
    ostream* output = &cout;  // Default to console output
    ofstream fileStream;

    if (!filepath.empty()) {
        fileStream.open(filepath);
        if (fileStream.is_open()) {
            output = &fileStream;  // Use fileStream if file is successfully opened
        } else {
            cerr << "Failed to open file: " << filepath << endl;
            return;
        }
    }

    *output << "Function Table Name: " << this->tableName << endl;
    if (this->parent) {
        *output << "Parent: " << this->parent->tableName << endl;
    }

    *output << "Return Type: " << returnType << endl;

    if (!parameters.empty()) {
        *output << "Parameters: ";
        for (const auto& param : parameters) {
            *output << param.first << " (" << param.second << ") ";  // Print name and type
        }
        *output << endl;
    } else {
        *output << "No Parameters" << endl;
    }

    *output << "Table: " << endl;
    for (const auto& entry : this->table) {
        *output << entry.first << " : " << entry.second->getVariableType() << endl;
    }

    if (fileStream.is_open()) {
        fileStream.close();
    }
}
