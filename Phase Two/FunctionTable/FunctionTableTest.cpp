#include "FunctionTable.h"
#include <cassert>
void testFunctionTable() {
    // Create the global symbol table
    SymbolTable globalTable("GlobalTable", nullptr);

    // Create a FunctionTable for a function named "foo"
    FunctionTable fooFunction("foo", &globalTable, "int");

    // Add parameters to the function (name and type)
    fooFunction.addParameter("a", "int");
    fooFunction.addParameter("b", "float");

    // Insert a variable into the function's symbol table
    SymbolTableEntry var1("x", "int", "0", true, false);
    SymbolTableEntry var2("x", "float", "0", true, false);
    fooFunction.insert(&var1);
    fooFunction.insert(&var2);

    // Look up the variable in the function's table
     assert(fooFunction.lookUp("x","int") == true);
     assert(fooFunction.lookUp("x", "float") == true);


     assert(fooFunction.lookUp("y","int") == false);  // Non-existent variable

    // Print the function's table to the console
    fooFunction.printTable();

    std::cout << "All tests passed for FunctionTable!\n";
}

int main() {
    testFunctionTable();
    return 0;
}
