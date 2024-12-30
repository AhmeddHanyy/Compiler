
%{
  #include <stdlib.h>
  #include <string.h>
  #include "SymbolHier/SymbolHier.h"
  #include "Quadraples/Quadraples.h"
  int yylex(void);  
  void yyerror(const char *s);
  void semantic_errors(const char *s);
  void semantic_warns(const char *s); 
  extern FILE* yyin;                          
  extern FILE* yyout;
  FILE *semantic_file;  
  int yylineno = 1;
  int num_scopes = 0;
  SymbolHier symbolHier;
  Quadraples quad;
%}

%union {
    char* intValue;
    char* floatValue;
    char charValue;
    char* stringValue;
    char* boolValue;
    char* idValue;
}

%start program

//For token name
%token INT FLOAT CHAR STRING BOOL CONST VOID
%token PLUS MINUS MULTIPLY DIVIDE POWER ASSIGN
%token AND OR NOT
%token EQ NEQ LT GT LE GE
%token IF ELSE WHILE DO RETURN FOR BREAK CONTINUE SWITCH CASE DEFAULT

//For the token value 
%token <stringValue> INTEGER_VAL
%token <stringValue> FLOAT_VAL
%token <stringValue> STRING_VAL
%token <stringValue> CHAR_VAL
%token <stringValue> BOOL_VAL
%token <idValue> IDENTIFIER



%type <stringValue> semi_colon_error dataType after_expressions_eval program_start_mark Comparator factor line start_line_mark ID expression arithExpression compExpression andLogExpression logExpression notLogExpression scope startScope endScope ifStatement ifScope elseScope IF_mark ELSE_mark WHILE_mark DO_mark doWhile function functionSig functionParams defaultParams functionCall functionCallParams epsilon returnStatement forLoop FOR_mark forLoop1 switchCase multiCase singleCase term1 term2 term3
%type <stringValue> EQ NEQ LT GT LE GE

%%

//Production Rules

program : program_start_mark script {}
;

program_start_mark : {
  SymbolTable* globalTable = new SymbolTable("Global", nullptr);
  symbolHier.addSymbolTable(globalTable);
  symbolHier.updateCurrentScope(globalTable);
}

script : 
        start_line_mark line {
          quad.printQuadraples();
          quad.printQuadraplesToFile("output.txt");
        }
      | script start_line_mark line {
          quad.printQuadraples();
          quad.printQuadraplesToFile("output.txt");
      }
;
start_line_mark : {printf("Processing line %d in the script.\n",yylineno);};

line : 
        dataType ID semi_colon_error {
                SymbolTable* entryScope = symbolHier.getEntryScope($2, $1);
                if (entryScope) {
                  semantic_errors("Variable is already declared\n");
                } else {
                  printf("Variable %s declared\n", $2);
                  symbolHier.addEntryToCurrentScope($2,$1,"-0",false,false);
                }
                
              }
      | dataType ID ASSIGN expression semi_colon_error {
                SymbolTable* entryScope = symbolHier.getEntryScope($2, $1);
                if (entryScope) {
                    semantic_errors("Variable is already declared\n");
                } else {
                  // Create an instance of SemanticChecker
                  SemanticChecker semanticChecker;

                  printf("Variable Type: %s\n", $1);
                  printf("Expression: %s\n", $4);

                  char* expr_value, *expr_name="";
                  vector <char*> expr_info = splitString($4, ',');

                  expr_value = expr_info[0];
                  if (expr_info.size() > 1) expr_name = expr_info[1];

                  printf("Expression Value: %s\n", expr_value);
                  printf("Expression Name: %s\n", expr_name);

                  // Check if the types are compatible
                  if (!semanticChecker.matchTypes($1, expr_value))
                  {
                    semantic_errors("Type mismatch between data type and expression\n");
                  }
                  else
                  {
                    symbolHier.addEntryToCurrentScope($2, $1, expr_value, true, false);
                    if (strcmp(expr_name, "") != 0) {
                      quad.addUnary("MOV", expr_name, true);
                    } else {
                      quad.addUnary("MOV", expr_value);
                    }
                    quad.resetEntryCount();
                  }
                }
                 
              }
      | CONST  dataType ID ASSIGN expression semi_colon_error{
                SymbolTable* entryScope = symbolHier.getEntryScope($3, $2);
                if (entryScope) {
                    semantic_errors("Variable is already declared\n");
                } else {
                    // Create an instance of SemanticChecker
                    SemanticChecker semanticChecker;

                    printf("Variable Type: %s\n", $2);
                    printf("Expression: %s\n", $5);

                    char* expr_value, *expr_name="";
                    vector <char*> expr_info = splitString($5, ',');

                    expr_value = expr_info[0];
                    if (expr_info.size() > 1) expr_name = expr_info[1];

                    printf("Expression Value: %s\n", expr_value);
                    printf("Expression Name: %s\n", expr_name);

                    // Check if the types are compatible
                    if (!semanticChecker.matchTypes($2, expr_value)) {
                        semantic_errors("Type mismatch between data type and expression\n");
                    } else {
                        symbolHier.addEntryToCurrentScope($3, $2, expr_value, true, true);
                        if (strcmp(expr_name, "") != 0) {
                          quad.addUnary("MOV", expr_name, true);
                        } else {
                          quad.addUnary("MOV", expr_value);
                        }
                        quad.resetEntryCount();
                      }
                }
               
       }
      | ID ASSIGN expression semi_colon_error{
              SymbolTable* entryScope = symbolHier.getEntryScope($1);
              if (!entryScope) {
                  semantic_errors("Variable is not declared\n");
              } 
              else {
                  SemanticChecker semanticChecker;
                  char* expr_value, *expr_name="";
                  vector <char*> expr_info = splitString($3, ',');

                  expr_value = expr_info[0];
                  if (expr_info.size() > 1) expr_name = expr_info[1];

                  // Create an instance of SemanticChecker
                  SymbolTable* entryScope = symbolHier.getEntryScope($1, semanticChecker.determineType(expr_value));
                  if (!entryScope) {
                      semantic_errors("Type mismatch between variable and expression\n");
                  }
                  else {
                    SymbolTableEntry* entry = entryScope->getEntry($1);

                    // Check if the variable is a constant
                    if (entry->getIsConstant()) {
                        semantic_errors("Cannot assign to a constant variable\n");
                    } else { 
                      // Assuming compatible, update the value of the variable
                      entry->setValue(expr_value);
                      entry->setIsInitialized(true);
                      // Use quads to assign the value to the variable
                      if (strcmp(expr_name, "") != 0) {
                        quad.addUnary("MOV", expr_name, true);
                      } else {
                        quad.addUnary("MOV", expr_value);
                      }
                      quad.resetEntryCount();
                    }
                  }
              }
              
            }
      | scope {}
      | ifStatement {}
      | whileLoop  {}
      | doWhile {}
      | function {}
      | functionCall {
        $$ = $1;
        char* label = quad.generateTempVar();
        quad.addBinary("CALL", label);
      }
      | returnStatement {}
      | forLoop {}
      | BREAK semi_colon_error{
         
      }
      | CONTINUE semi_colon_error {
      
                 
      }
      | switchCase
      
;
semi_colon_error: ';' {}
                | epsilon{
                    yyerror("Missing ';'");
                    $$ = $1;
                   }
;

dataType : INT { $$ = "int";  }
         | FLOAT { $$ = "float";  }
         | CHAR { $$ = "char"; }
         | STRING { $$ = "string"; }
         | BOOL { $$ = "bool";}
;
ID : IDENTIFIER { 
                  $$ = $1;
                  quad.pushLabel($1);  
                }
   ;

/*#########################################################################*/
expression : logExpression{
                            $$ = $1;
                            printf("logExpression: %s\n", $1);
                          }
           | functionCall {
                            $$ = $1;
                            printf("AAAA Function Call: %s\n", $1);
                            char* label = quad.generateTempVar();
                            quad.addBinary("CALL", label);
                          }
;

/*
- C doesn't have bool
- We treat bool here as any number if it's not equal to 0, then it means true
*/

// Logical Expressions
logExpression : logExpression OR andLogExpression {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString($3, ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString($1, ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    $$ = "";
                  }
                  else if (strcmp(left_expr_value, "bool") != 0) {
                    semantic_errors("Invalid operation for non-boolean types\n");
                    $$ = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("OR", tempVar);
                    $$ = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
              | andLogExpression {
  $$ = $1; // propagate the result of the andLogExpression
}

andLogExpression : andLogExpression AND notLogExpression {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString($3, ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString($1, ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    $$ = "";
                  }
                  else if (strcmp(left_expr_value, "bool") != 0) {
                    semantic_errors("Invalid operation for non-boolean\n");
                    $$ = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("AND", tempVar);
                    $$ = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
                | notLogExpression {
  $$ = $1; // propagate the result of the notLogExpression
}

notLogExpression : NOT notLogExpression {
          char* expr_value, *expr_name;
          vector <char*> expr_info = splitString($2, ',');
          expr_value = expr_info[0];
          expr_name = expr_info[1];

          // check if it is a float / int
          SemanticChecker semanticChecker;
          char* expr_type = semanticChecker.determineType(expr_value);
          if (strcmp(expr_type, "bool") != 0) {
            semantic_errors("Invalid operation for non-boolean types\n");
            $$ = "";
          } else {
            char* tempVar = quad.generateTempVar();
            quad.addUnary("NOT", tempVar);
            quad.pushLabel(tempVar);
            $$ = concatenateTwoStrings(expr_value, tempVar, ',');
          }
        }
      | compExpression {
        $$ = $1; 
        printf("compExpression: %s\n", $1);
      }

/* Comparison Expressions */
compExpression : compExpression Comparator arithExpression {
                char* right_expr_value, *left_expr_value;
                vector <char*> expr_info = splitString($3, ',');
                right_expr_value = expr_info[0];
                expr_info = splitString($1, ',');
                left_expr_value = expr_info[0];

                printf("|||Left Expression: %s\n", left_expr_value);
                printf("|||Right Expression: %s\n", right_expr_value);

                // Check if the types are compatible
                SemanticChecker semanticChecker;
                if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                  semantic_errors("Type mismatch between left and right expressions\n");
                  $$ = "";
                }
                else if (strcmp(left_expr_value, "bool") != 0 && strcmp(left_expr_value, "int") != 0 && strcmp(left_expr_value, "float") != 0) {
                  semantic_errors("Invalid operation for non-numeric/boolean types\n");
                  $$ = "";
                }
                else {
                  char* tempVar = quad.generateTempVar();
                  quad.addBinary($2, tempVar);
                  $$ = concatenateTwoStrings("bool", tempVar, ','); // result of addition is stored in a temporary variable
                }
              }
              | arithExpression {
  $$ = $1; // propagate the result of the arithmetic expression
}

Comparator : EQ {$$ = "EQ";}
           | NEQ  {$$ = "NEQ";}
           | LT {$$ = "LT";}
           | GT {$$ = "GT";}
           | LE {$$ = "LE";}
           | GE {$$ = "GE";}

/* Arithmetic Expressions */
arithExpression : 
            term1 {
              $$ = $1; // propagate the result of the term1
             }
          | arithExpression PLUS term1 {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString($3, ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString($1, ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    $$ = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    $$ = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("ADD", tempVar);
                    $$ = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
          | arithExpression MINUS term1 {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString($3, ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString($1, ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    $$ = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    $$ = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("SUB", tempVar);
                    $$ = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }

term1 : term2 {
          $$ = $1; // propagate the result of term2
        }
      | term1 MULTIPLY term2 {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString($3, ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString($1, ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    $$ = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    $$ = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("MUL", tempVar);
                    $$ = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
      | term1 DIVIDE term2 {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString($3, ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString($1, ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    $$ = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    $$ = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("DIV", tempVar);
                    $$ = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }

term2 : term3 {
                  $$ = $1; // propagate the result of term3
                }
      | term3 POWER term2 {
                  char* right_expr_value, *left_expr_value;
                  vector <char*> expr_info = splitString($3, ',');
                  right_expr_value = expr_info[0];
                  expr_info = splitString($1, ',');
                  left_expr_value = expr_info[0];
                  // Check if the types are compatible
                  SemanticChecker semanticChecker;
                  if (!semanticChecker.matchTypes(left_expr_value, right_expr_value)) {
                    semantic_errors("Type mismatch between left and right expressions\n");
                    $$ = "";
                  }
                  else if (strcmp(left_expr_value, "bool") == 0 || strcmp(left_expr_value, "char") == 0) {
                    semantic_errors("Invalid operation for boolean or character types\n");
                    $$ = "";
                  }
                  else {
                    char* tempVar = quad.generateTempVar();
                    quad.addBinary("POW", tempVar);
                    $$ = concatenateTwoStrings(right_expr_value, tempVar, ','); // result of addition is stored in a temporary variable
                  }
                }
term3 : MINUS term3 {
          char* expr_value, *expr_name;
          vector <char*> expr_info = splitString($2, ',');
          expr_value = expr_info[0];
          expr_name = expr_info[1];

          // check if it is a float / int
          SemanticChecker semanticChecker;
          printf("-----Expression Value: %s\n", expr_value);
          char* expr_type = semanticChecker.determineType(expr_value);
          if (strcmp(expr_type, "float") != 0 && strcmp(expr_type, "int") != 0) {
            semantic_errors("Invalid operation for non-numeric types\n");
            $$ = "";
          } else {
            char* tempVar = quad.generateTempVar();
            quad.addUnary("NEG", tempVar);
            quad.pushLabel(tempVar);
            $$ = concatenateTwoStrings(expr_value, tempVar, ',');
          }
        }
      | factor { 
          $$ = $1; // propagate the result of the factor
        }

factor : 
          INTEGER_VAL {
            // convert integer value to string
            char* expr_info = concatenateTwoStrings("int", $1, ','); 
            $$ = expr_info;
            quad.pushLabel($1); 
          }
        | FLOAT_VAL {
            char* expr_info = concatenateTwoStrings("float", $1, ','); 
            $$ = expr_info;
            quad.pushLabel($1);
          }
        | CHAR_VAL {
            char* expr_info = concatenateTwoStrings("char", $1, ','); 
            $$ = expr_info;
            quad.pushLabel($1);
          }
        | STRING_VAL {
            char* expr_info = concatenateTwoStrings("string", $1, ','); 
            $$ = expr_info;
            quad.pushLabel($1);
          }
        | BOOL_VAL {
            char* expr_info = concatenateTwoStrings("bool", $1, ','); 
            $$ = expr_info;
            quad.pushLabel($1);
          }
        | ID {
              SymbolTable* entryScope =  symbolHier.getEntryScope($1);

              if (!entryScope)
              {
                semantic_errors("Variable is not declared\n");
              }
              else {
                //variable is declared and we have its scope table now lets get the entry from the table
                SymbolTableEntry* entry = entryScope->getEntry($1);
                if(!entry->getIsInitialized())
                {
                  semantic_errors("Variable is not initiliazed\n");
                }
                entry->setIsAccessed(true);
                printf("|| entry->getValue(): %s\n", entry->getValue());
                printf("|| entry->getVariableName(): %s\n", entry->getVariableName());
                $$ = concatenateTwoStrings(entry->getValue(), entry->getVariableName(), ',');
              }
            }
        | '(' logExpression ')' { $$ = $2; }
;
/*###########################################################################################*/
// Scopes
scope : startScope script endScope {}
           | startScope endScope {}
;

startScope : '{' {
  //create new table
  SymbolTable* localTable = new SymbolTable(strdup(("Local" + to_string(num_scopes)).c_str()), symbolHier.currentScopeTable);
  num_scopes = num_scopes +1;
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(localTable);
  symbolHier.addSymbolTable(localTable);
  //update current scope
  symbolHier.updateCurrentScope(localTable);                
} 
;

endScope : '}' {
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);                   
} | error  {
  yyerror("Missing closing brace '}' at the end of scope.");
}
;
/*####################################################################################*/
// IF-Condition
/*
We are assuming that:
if()
  int x; is not allowed there must be {}

*/
ifStatement : ifScope elseIfStatements {} // matched with else if
            | ifScope {} // unmatched
;

elseIfStatements : elseIfStatement elseIfStatements {} // multiple else-if statements
                 | elseIfStatement {} // single else-if statement
                 | elseScope {} // matched with else
;

elseIfStatement : ELSE_IF_mark '(' expression ')' scope {
    SemanticChecker semanticChecker;
    if (!semanticChecker.isBool($3)) {
      semantic_errors("Condition expression must be of boolean type\n");
    } else {
      printf("ELSE IF statement ends\n");
      quad.addLine();
    }
}
;

elseScope : ELSE_mark scope {
    printf("ELSE statement ends\n");
    quad.addLine();
}
;

ifScope : IF_mark '(' expression ')' scope {
    SemanticChecker semanticChecker;
    if (!semanticChecker.isBool($3)) {
        printf("Condition expression: %s\n", $3);
        semantic_errors("Condition expression must be of boolean type\n");
    } else {
        printf("IF statement ends\n");
        quad.addLine();
    }
}
;

IF_mark : IF {
    printf("IF statement begins\n");
}
;

ELSE_IF_mark : ELSE IF {
    printf("ELSE IF statement begins\n");
}
;

ELSE_mark : ELSE {
    printf("ELSE statement begins\n");
}
;

/*############################################################################################*/
//While Loop
whileLoop : WHILE_mark '(' expression after_expressions_eval ')' scope {
  quad.endLoop(); 
};

after_expressions_eval : {
  quad.pushLabel("true");
  quad.addBranch("==");
}

WHILE_mark : WHILE {
  quad.addLoopStart();
}
;
/*###############################################################################################*/
//Do WHILE
doWhile : DO_mark scope WHILE '(' expression ')' {
printf("Do While Scope Ends\n"); 
}
            ;

DO_mark : DO { 
                printf("Do While Scope begins\n");
              }
        ;

/*##################################################################################################*/
//FUNCTIONS
//First function definition/prototype
function : functionSigStart functionSig scope {
  printf("Function ends\n");
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent);
}
;


functionSig : '(' dataType ID functionParams ')' {
if(symbolHier.currentScopeTable->lookUp($3,$2))
{
  semantic_errors("Variable is already in param list\n");
}else{
  quad.popLabel();
  symbolHier.addEntryToCurrentScope($3,$2,$2,true,false);
}
}
            |  '(' dataType ID ASSIGN expression defaultParams ')' {
if(symbolHier.currentScopeTable->lookUp($3,$2))
{
  semantic_errors("Variable is already in param list\n");
}
//check dataType and expression type compatible or not

                  //Assuming compatible then:
                  // symbolHier.addEntryToCurrentScope($2,$1,expression,true,false);
              }
            |  '('')' { printf("Starting params list\n");}
; 
// returnType: dataType{}
//           | VOID{}
// ;
functionSigStart: dataType ID {
  SymbolTable* functionTable = new SymbolTable($2, symbolHier.currentScopeTable, $1);
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(functionTable);
  symbolHier.addFunctionTable(functionTable);
  //update current scope
  symbolHier.updateCurrentScope(functionTable);
  // Use quads to add the function label
  quad.isFunctionFlag = 1;
  quad.insertEntry(concatenateTwoStrings($2,":"),"","","");
  quad.popLabel();
}
| VOID ID {
  SymbolTable* functionTable = new SymbolTable($2, symbolHier.currentScopeTable,(char*)"void");
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(functionTable);
  symbolHier.addSymbolTable(functionTable);
  //update current scope
  symbolHier.updateCurrentScope(functionTable);
  // Use quads to add the function label
  quad.isFunctionFlag = 1;
  quad.insertEntry(concatenateTwoStrings($2,":"),"","","");
}
;

functionParams : ',' dataType ID functionParams {
if(symbolHier.currentScopeTable->lookUp($3,$2))
{
  semantic_errors("Variable is already in param list\n");
}else{
  quad.popLabel();
  symbolHier.addEntryToCurrentScope($3,$2,$2,true,false);
}

                  }
               | defaultParams {}
;
defaultParams : ',' dataType ID ASSIGN expression defaultParams  {
if(symbolHier.currentScopeTable->lookUp($3,$2))
{
  semantic_errors("Variable is already in param list\n");
}
//check dataType and expression type compatible or not

                      //Assuming compatible then:
                      // symbolHier.addEntryToCurrentScope($2,$1,expression,true,false);
                    }
              | epsilon { $$ = $1; }
;
//Second function call

functionCall : ID '(' expression functionCallParams  ')'{
                      char* expr_value, *expr_label="";
                      vector <char*> expr_info = splitString($3, ',');
                      expr_value = expr_info[0];
                      if (expr_info.size() > 1) expr_label = expr_info[1];
                      printf("Function Call: expr_info: %s || %s\n", expr_value, expr_label);
                      char* params = concatenateTwoStrings($4,expr_label,',');
                      printf("Function Call: %s\n", params);
                      printf("Function Call: %s\n", $4);
                      char* reason = nullptr;
                      SymbolTable* foundTable = symbolHier.checkFunctionExists($1, params, reason);
                      if (!foundTable){
                        yyerror(reason);
                        printf("Function %s not found\n", $1);
                      }
                      else {
                        quad.popLabel();
                        $$ = concatenateTwoStrings(foundTable->returnType, params, ',');
                        printf("Function %s called\n", $1);
                        vector<char*> paramsList = splitString(params, ',');
                        quad.pushLabel(concatenateList(paramsList)); 
                      }
                    }
             | ID '(' ')' {
                      char* reason = nullptr;
                      SymbolTable* foundTable = symbolHier.checkFunctionExists($1, nullptr, reason);
                      if (!foundTable){
                        semantic_errors(reason);
                      }
                      else {
                        $$ = foundTable->returnType;
                        printf("Function %s called\n", $1);
                        quad.pushLabel($1);
                      }
                    }
;

functionCallParams :  ',' expression functionCallParams {
                          quad.popLabel();
                          char* expr_value, *expr_label="";   
                          vector <char*> expr_info = splitString($2, ',');
                          expr_value = expr_info[0];
                          if (expr_info.size() > 1) expr_label = expr_info[1];
                          $$ = concatenateTwoStrings($3, expr_label, ',');
                        }
                    | epsilon {$$ = $1;}
;

epsilon : {$$ = "";}
;
returnStatement : RETURN_mark expression ';' {
                    printf("||Return statement: %s\n", $2);
                    char* expr_value, *expr_name="";
                    vector <char*> expr_info = splitString($2, ',');
                    expr_value = expr_info[0];
                    if (expr_info.size() > 1) expr_name = expr_info[1];
                    SymbolTable* funcScope = symbolHier.currentScopeTable->parent;
                    if (!funcScope || funcScope->returnType == nullptr) {
                      yyerror("Return statement not allowed in this scope\n");
                    } else if (!funcScope->validateReturnType(expr_value)) {
                      yyerror("Return type does not match the function return type\n");
                    } else {
                      printf("Return statement ends\n");
                      $$ = $2;
                      if (strcmp(expr_name, "") != 0) {
                        quad.addUnary("RET", "");
                      } else {
                        quad.addUnary("RET", "");
                      }
                      quad.isFunctionFlag = 0;
                    }
                  }
                | RETURN_mark';' {
                    if (symbolHier.currentScopeTable->returnType == nullptr) {
                      yyerror("Return statement not allowed in this scope\n");
                    } else if (!symbolHier.currentScopeTable->validateReturnType("void")) {
                      yyerror("Return type does not match the function return type\n");
                    } else {
                      printf("Return statement ends\n");
                      $$ = "";
                    }
                }
;
RETURN_mark: RETURN {}

/*##################################################################################################*/
// For Loop
/*
One downgrade:
for(int i =0;i<5;i++){
int i; will be allowed but who cares
}

*/
forLoop : FOR_mark '(' forLoop1  ';' expression ';' ID ASSIGN expression ')' scope  {
  symbolHier.updateCurrentScope(symbolHier.currentScopeTable->parent); 
}
;
      
FOR_mark : FOR {
  SymbolTable* localTable = new SymbolTable(strdup(("Local" + to_string(num_scopes)).c_str()), symbolHier.currentScopeTable);
  num_scopes = num_scopes +1;
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(localTable);
  symbolHier.addSymbolTable(localTable);
  //update current scope
  symbolHier.updateCurrentScope(localTable);
}
;
forLoop1 : dataType ID ASSIGN expression {}
         | ID ASSIGN expression {}
         | epsilon { $$ = $1; }
;


/*##################################################################################################*/
// Switch case
switchCase : SWITCH '(' ID ')' startScope multiCase endScope {}
;



multiCase : multiCase singleCase {}
          | singleCase {}
;

singleCase : CASE INTEGER_VAL ':' script {}
           | CASE CHAR_VAL ':' script {}
           | DEFAULT ':' script {}
;


%%

void yyerror(const char *msg){
  fprintf(yyout, "line [%d]: Error: %s\n", yylineno, msg);
}
void semantic_errors(const char *msg) {  
      if (semantic_file == NULL) {
          fprintf(stderr, "Error: Could not open semantic_errors.txt for writing\n");
          return;
      }

      fprintf(semantic_file, "line [%d]: Semantic Error: %s\n", yylineno, msg); 
}

void semantic_warns(const char *msg) {
      if (semantic_file == NULL) {
          fprintf(stderr, "Error: Could not open semantic_errors.txt for writing\n");
          return;
      }

      fprintf(semantic_file, "Semantic Warning: %s\n", msg); 
}

int main(int argc, char** argv){

  FILE *file = fopen(argv[1], "r");
  semantic_file = fopen("semantic_errors.txt", "w");

  if(file == NULL){
    yyerror("File not found!\n");
    return 1;
  }
  yyin = file;
  yyout = fopen("syntax_errors.txt", "w");

if (yyparse() == 0) {
    printf("Program parsed successfully.\n");
} else {
    printf("Program did not parse due to syntax errors.\n");
}
    
  symbolHier.printAllTables();
  fclose(yyin);
  fclose(yyout);
  return 0;
}
