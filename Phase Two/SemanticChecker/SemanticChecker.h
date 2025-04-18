#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

class SemanticChecker {

private:
    list<string>* errors;
    list<string>* warnings;

    bool isAlphaNumeric(char);

public:
    
    SemanticChecker();
    ~SemanticChecker();

    bool isInt(char*);
    bool isFloat(char*);
    bool isString(char*);
    bool isChar(char*);
    bool isBool(char*);
    bool matchTypes(char*, char*);

    char* determineType(char*);

    void addError(int, char*); //both functions take a line number and a message
    void addWarning(int, char*);

    void printErrors();
    void printWarnings();

};