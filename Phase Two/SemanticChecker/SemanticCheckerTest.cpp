#include <iostream>
#include <cassert>
#include "SemanticChecker.h"

int main() {
    // Create an instance of the SemanticChecker
    SemanticChecker checker;

    // Test isInt function
    assert(checker.isInt((char*)"123") == true);    // valid integer
    assert(checker.isInt((char*)"-123") == true);   // valid negative integer
    assert(checker.isInt((char*)"12.3") == false);  // invalid integer
    assert(checker.isInt((char*)"abc") == false);   // invalid integer
    assert(checker.isInt((char*)"") == false);      // empty string

    // Test isFloat function
    assert(checker.isFloat((char*)"123.45") == true);  // valid float
    assert(checker.isFloat((char*)"-123.45") == true); // valid negative float
    assert(checker.isFloat((char*)"123") == false);    // not a float, it's an integer
    assert(checker.isFloat((char*)"abc") == false);    // invalid float
    assert(checker.isFloat((char*)"") == false);       // empty string

    // Test isString function
    assert(checker.isString((char*)"\"Hello World\"") == true);  // valid string literal
    assert(checker.isString((char*)"Hello World") == false);     // not enclosed in quotes
    assert(checker.isString((char*)"") == false);                // empty string

    // Test isChar function
    assert(checker.isChar((char*)"\'a\'") == true);  // valid character literal
    assert(checker.isChar((char*)"a") == false);     // invalid character literal (more than one character)
    assert(checker.isChar((char*)"\'ab\'") == false); // invalid character literal (more than one character)
    assert(checker.isChar((char*)"") == false);      // empty string

    // Test isBool function
    assert(checker.isBool((char*)"true") == true);   // valid boolean
    assert(checker.isBool((char*)"false") == true);  // valid boolean
    assert(checker.isBool((char*)"1") == true);     //  boolean
    assert(checker.isBool((char*)"abc") == true);   //  boolean
    assert(checker.isBool((char*)"") == false);      // empty string

    // Test matchTypes function
    assert(checker.matchTypes((char*)"int", (char*)"int") == true);  // matching types
    assert(checker.matchTypes((char*)"int", (char*)"float") == false);  // different types

    // Test determineType function
    assert(strcmp(checker.determineType((char*)"123"), "int") == 0);  // integer type
    assert(strcmp(checker.determineType((char*)"123.45"), "float") == 0); // float type
    assert(strcmp(checker.determineType((char*)"\"Hello World\""), "string") == 0); // string type
    assert(strcmp(checker.determineType((char*)"\'a\'"), "char") == 0); // char type
    assert(strcmp(checker.determineType((char*)"true"), "bool") == 0); // boolean type
    assert(strcmp(checker.determineType((char*)"abc123"), "unknown") == 0); // unknown type

    // Test addError and printErrors
    checker.addError(1, (char*)"Undefined variable");
    checker.addError(2, (char*)"Type mismatch");
    checker.printErrors();  // This should print the error messages to console

    // Test addWarning and printWarnings
    checker.addWarning(3, (char*)"Variable not used");
    checker.addWarning(4, (char*)"Possible memory leak");
    checker.printWarnings();  // This should print the warning messages to console

    // All tests passed
    std::cout << "All tests passed!" << std::endl;

    return 0;
}
