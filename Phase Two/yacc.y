
%{
  #include <stdlib.h>
  #include <string.h>
  #include "SymbolHier/SymbolHier.h"
  #include "Quadraples/Quadraples.h"
  int yylex(void);  
  void yyerror(const char *s);
  void semantic_errors(const char *s); 
  extern FILE* yyin;                          
  extern FILE* yyout;  
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
%token <intValue> INTEGER_VAL
%token <floatValue> FLOAT_VAL
%token <stringValue> STRING_VAL
%token <stringValue> CHAR_VAL
%token <boolValue> BOOL_VAL
%token <idValue> IDENTIFIER



%type <stringValue> semi_colon_error dataType program_start_mark factor line start_line_mark ID expression arithExpression compExpression andLogExpression logExpression notLogExpression scope startScope endScope ifStatement ifScope elseScope IF_mark ELSE_mark WHILE_mark DO_mark doWhile function functionSig functionParams defaultParams functionCall functionCallParams epsilon returnStatement forLoop FOR_mark forLoop1 switchCase multiCase singleCase term1 term2 term3

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

                  // Check if the types are compatible
                  if (!semanticChecker.matchTypes($1, $4))
                  {
                    semantic_errors("Type mismatch between data type and expression\n");
                  }
                  else
                  {
                    printf("Assigned value to %s\n", $2);
                    // Add the entry to the current scope
                    symbolHier.addEntryToCurrentScope($2, $1, $4, true, false);
                    printf("Added entry to current scope\n");
                    // Use quads to assign the value to the variable
                    quad.addUnary("MOV", $4);
                    quad.popLabel();
                    quad.resetEntryCount();
                  }
                }
                 
              }
      | CONST  dataType ID ASSIGN expression semi_colon_error{
                SymbolTable* entryScope = symbolHier.getEntryScope($3);
                if (entryScope) {
                    semantic_errors("Variable is already declared\n");
                } else {
                    // Create an instance of SemanticChecker
                    SemanticChecker semanticChecker;

                    // Check if the types are compatible
                    if (!semanticChecker.matchTypes($2, $5)) {
                        semantic_errors("Type mismatch between data type and expression\n");
                    } else {
                        // Assuming compatible, add the entry to the current scope as a constant
                        symbolHier.addEntryToCurrentScope($3, $2, $5, true, true);
                        printf("Assigned constant value to %s\n", $3);
                        // Use quads to assign the value to the variable
                        quad.addUnary("MOV", $5);
                        quad.popLabel();
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
                  // Create an instance of SemanticChecker
                  SymbolTableEntry* entry = entryScope->getEntry($1);
                  SemanticChecker semanticChecker;

                  // Check if the variable is a constant
                  if (entry->getIsConstant()) {
                      semantic_errors("Cannot assign to a constant variable\n");
                  } else {
                      // Check if the types are compatible
                      if (!semanticChecker.matchTypes(entry->getVariableType(), $3)) {
                          semantic_errors("Type mismatch between variable and expression\n");
                      } else {
                          // Assuming compatible, update the value of the variable
                          entry->setValue($3);
                          entry->setIsInitialized(true);
                          printf("Assigned value to %s\n", $1);
                          // Use quads to assign the value to the variable
                          quad.addUnary("MOV", $3);
                          quad.popLabel();
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
      | functionCall {}
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
expression : logExpression{$$ = $1;}
           | functionCall{$$ = $1;}
;

/*
- C doesn't have bool
- We treat bool here as any number if it's not equal to 0, then it means true
*/

// Logical Expressions
logExpression : logExpression OR andLogExpression {}
              | andLogExpression {}
;

andLogExpression : andLogExpression AND notLogExpression {}
                 | notLogExpression {}
;

notLogExpression : NOT notLogExpression {}
                 | compExpression {}
;

// Comparison Expressions

compExpression : compExpression Comparator arithExpression {}
               | arithExpression {}
;

Comparator: EQ {}
          | NEQ {}
          | LT {}
          | GT {}
          | LE {}
          | GE {}
;

// Arithmetic Expressions

arithExpression : term1 {}
                | arithExpression PLUS term1 {}
                | arithExpression MINUS term1 {}
;

term1 : term2 {}
     | term1 MULTIPLY term2 {}
     | term1 DIVIDE term2 {}
     
;

term2 : term3 {}
      | term3 POWER term2 {}
;

/*
-!x 
!-x 
are acceptable in C hehehehe
*/

term3 : MINUS term3 { 
//need to check if term3 returned is a number or not(we can make a funct for it)
//if yes:
// cast string to a number and multipy by -1 = val
//then:
// $$ = val;



 }
      | factor { $$ = $1; }
;

factor : INTEGER_VAL { $$ = $1; }
       | FLOAT_VAL { $$ = $1;}
       | CHAR_VAL { $$ = $1;}
       | STRING_VAL { $$ = $1;}
       | ID {
              SymbolTable* entryScope =  symbolHier.getEntryScope($1);

              if(!entryScope)
              {
                semantic_errors("Variable is not declared\n");
              }else{
                //variable is declared and we have its scope table now lets get the entry from the table
                SymbolTableEntry* entry = entryScope->getEntry($1);
                if(!entry->getIsInitialized())
                {
                  semantic_errors("Variable is not initiliazed\n");
                }
                entry->setIsAccessed(true);
                $$ = entry->getValue();
              }
            }
       | '(' logExpression ')' { printf("Processed parenthesis with logical expression.\n"); }
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
    }
}
;

elseScope : ELSE_mark scope {
    printf("ELSE statement ends\n");
}
;

ifScope : IF_mark '(' expression ')' scope {
    SemanticChecker semanticChecker;
    if (!semanticChecker.isBool($3)) {
        printf("Condition expression: %s\n", $3);
        semantic_errors("Condition expression must be of boolean type\n");
    } else {
        printf("IF statement ends\n");
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
whileLoop : WHILE_mark '(' expression ')' scope {
printf("While loop Ends\n"); 
}
;
WHILE_mark : WHILE {
printf("While loop starts\n"); 
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
  symbolHier.addEntryToCurrentScope($3,$2,"-0",false,false);
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
  SymbolTable* functionTable = new SymbolTable($2, symbolHier.currentScopeTable,$1);
  //add table as a child to current
  symbolHier.currentScopeTable->addChild(functionTable);
  symbolHier.addFunctionTable(functionTable);
  //update current scope
  symbolHier.updateCurrentScope(functionTable);
}
| VOID ID {
SymbolTable* functionTable = new SymbolTable($2, symbolHier.currentScopeTable,(char*)"void");
//add table as a child to current
symbolHier.currentScopeTable->addChild(functionTable);
symbolHier.addSymbolTable(functionTable);
//update current scope
symbolHier.updateCurrentScope(functionTable);
}
;

functionParams : ',' dataType ID functionParams{
if(symbolHier.currentScopeTable->lookUp($3,$2))
{
  semantic_errors("Variable is already in param list\n");
}else{
  symbolHier.addEntryToCurrentScope($3,$2,"-0",false,false);
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
              | epsilon {}
;
//Second function call

functionCall : ID '(' expression functionCallParams  ')'{

printf("--params: %s expression: %s\n",$4,$3);
char* params = concatenateTwoStrings($4,$3,',');
printf("--params: %s\n",params);
char* reason = nullptr;
SymbolTable* foundTable = symbolHier.checkFunctionExists($1, params,reason);
if(!foundTable){
  semantic_errors(reason);
}else{
  //found
  $$ = foundTable->returnType;
}


}
             | ID '(' ')'{printf("Calling function %s\n",$1);}
;

functionCallParams :  ',' expression functionCallParams {
$$ = concatenateTwoStrings($3, $2, ',');
}
                   | epsilon {}
;

epsilon : {$$ = "";}
;
returnStatement : RETURN_mark expression ';' {}
                | RETURN_mark';' {}
;
RETURN_mark: RETURN {printf("returning from function\n");}

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
         | epsilon {}
;


/*##################################################################################################*/
// Switch case
switchCase : SWITCH '(' ID ')' '{' multiCase '}' {}
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
      FILE *semantic_file = fopen("semantic_errors.txt", "a");
      if (semantic_file == NULL) {
          fprintf(stderr, "Error: Could not open semantic_errors.txt for writing\n");
          return;
      }

      fprintf(semantic_file, "line [%d]: Semantic Error: %s\n", yylineno, msg); 
      fclose(semantic_file); // Close the file
}

int main(int argc, char** argv){

  FILE *file = fopen(argv[1], "r");

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
