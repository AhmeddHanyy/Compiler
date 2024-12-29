#include "SemanticChecker.h"
#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

// Constructor
SemanticChecker::SemanticChecker()
{
    errors = new list<string>();
    warnings = new list<string>();
}

// Destructor
SemanticChecker::~SemanticChecker()
{
    delete errors;
    delete warnings;
}

// Helper function to check if a character is alphanumeric
bool SemanticChecker::isAlphaNumeric(char c)
{
    return isalnum(c) || c == '_';
}

// Check if a string represents an integer
bool SemanticChecker::isInt(char *str)
{
    if (str == nullptr || *str == '\0')
        return false;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && str[i] == '-')
        {
            continue; // allow leading negative sign
        }
        if (!isdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}

// Check if a string represents a float
bool SemanticChecker::isFloat(char *str)
{
    if (str == nullptr || *str == '\0')
        return false;

    bool decimalPointFound = false;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && str[i] == '-')
        {
            continue; // allow leading negative sign
        }
        if (str[i] == '.')
        {
            if (decimalPointFound)
            {
                return false; // more than one decimal point
            }
            decimalPointFound = true;
        }
        else if (!isdigit(str[i]))
        {
            return false;
        }
    }
    return decimalPointFound;
}

// Check if a string represents a string literal (enclosed in quotes)
bool SemanticChecker::isString(char *str)
{
    if (str == nullptr || *str == '\0')
        return false;
    int len = strlen(str);
    return (str[0] == '"' && str[len - 1] == '"');
}

// Check if a string represents a character literal (enclosed in single quotes)
bool SemanticChecker::isChar(char *str)
{
    if (str == nullptr || strlen(str) != 3)
        return false;
    return (str[0] == '\'' && str[2] == '\'');
}

// Check if a string represents a boolean value (true or false)
bool SemanticChecker::isBool(char *str)
{
    return true;
}

// Match the types of two strings
bool SemanticChecker::matchTypes(char *type1, char *type2)
{
    return strcmp(type1, type2) == 0;
}

// Determine the type of a given string
char *SemanticChecker::determineType(char *str)
{
    if (isInt(str))
        return (char *)"int";
    if (isFloat(str))
        return (char *)"float";
    if (isString(str))
        return (char *)"string";
    if (isChar(str))
        return (char *)"char";
    if (isBool(str))
        return (char *)"bool";
    return (char *)"unknown";
}

// Add an error message to the list of errors
void SemanticChecker::addError(int lineNumber, char *message)
{
    errors->push_back("Error on line " + to_string(lineNumber) + ": " + message);
}

// Add a warning message to the list of warnings
void SemanticChecker::addWarning(int lineNumber, char *message)
{
    warnings->push_back("Warning on line " + to_string(lineNumber) + ": " + message);
}

// Print all errors
void SemanticChecker::printErrors()
{
    if (errors->empty())
    {
        cout << "No errors found." << endl;
    }
    else
    {
        for (auto &error : *errors)
        {
            cout << error << endl;
        }
    }
}

// Print all warnings
void SemanticChecker::printWarnings()
{
    if (warnings->empty())
    {
        cout << "No warnings found." << endl;
    }
    else
    {
        for (auto &warning : *warnings)
        {
            cout << warning << endl;
        }
    }
}
