
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "SymbolHier/SymbolHier.h"
    int yylex(void);  
    void yyerror(const char *s);  
    extern FILE* yyin;                          
    extern FILE* yyout;  
    int yylineno = 1;
    int num_scopes = 0;
    SymbolHier symbolHier;
    SymbolTable* globalTable = new SymbolTable("Global",nullptr);
    symbolHier.addSymbolTable(globalTable);
    symbolHier.updateCurrentScope(globalTable);
    
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
%token <charValue> CHAR_VAL
%token <boolValue> BOOL_VAL
%token <idValue> IDENTIFIER



%type <stringValue> dataType factor line start_line_mark ID expression arithExpression compExpression andLogExpression logExpression notLogExpression scope startScope endScope ifStatement ifScope elseScope IF_mark ELSE_mark WHILE_mark DO_mark doWhile function functionSig functionParams defaultParams functionCall functionCallParams epsilon returnStatement forLoop FOR_mark forLoop1 switchCase multiCase singleCase

%%

//Production Rules

program : script {}
;

script : start_line_mark line {}
       | script start_line_mark line{}
;
start_line_mark : {printf("Processing line %d in the script.\n",yylineno);};
// Variable Declaration

line : dataType ID ';' {

if(symbolHier.currentScopeTable->lookUp($2,$1))
{
  yyerror("Variable is already declared\n");
}else{
  symbolHier.addEntryToCurrentScope($2,$1,"-0",false,false);
}
}
     | dataType ID ASSIGN expression ';' {

if(symbolHier.currentScopeTable->lookUp($2,$1))
{
  yyerror("Variable is already declared\n");
}
//check dataType and expression type compatible or not

//Assuming compatible then:
symbolHier.addEntryToCurrentScope($2,$1,expression,true,false);
}
     | CONST  dataType ID ASSIGN expression ';'{ printf("Assigned constant value to %s\n", $3); }
     | ID ASSIGN expression  ';'
{
SymbolTable* entryScope =  symbolHier.getEntryScope($1);
if(!entryScope)
{
  yyerror("Variable is not declared\n");
}else{
  //variable is declared and we have its scope table now lets get the entry from the table
  SymbolTableEntry* entry = entryScope->getEntry($1);
  //Now we need to check if type of expression compatible with type of variable
  entry->setIsAccessed(true);
  entryy->setValue($3);
}


     }
     | scope {}
     | ifStatement {}
     | whileLoop  {}
     | doWhile {}
     | function{}
     | functionCall{}
     | returnStatement {}
     | forLoop {}
     | BREAK ';'{}
     | CONTINUE ';' {}
     | switchCase
;


dataType : INT { $$ = "int";  }
         | FLOAT { $$ = "float";  }
         | CHAR { $$ = "char"; }
         | STRING { $$ = "string"; }
         | BOOL { $$ = "bool";}
;
ID : IDENTIFIER { $$ = $1;}
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
logExpression : logExpression OR andLogExpression { printf("Evaluated OR expression.\n"); }
              | andLogExpression { printf("Evaluated single andLogExpression.\n"); }
;

andLogExpression : andLogExpression AND notLogExpression { printf("Evaluated AND expression.\n"); }
                 | notLogExpression { printf("Evaluated single notLogExpression.\n"); }
;

notLogExpression : NOT notLogExpression { printf("Evaluated NOT expression.\n"); }
                 | compExpression { printf("Evaluated comparison expression.\n"); }
;

// Comparison Expressions

compExpression : compExpression Comparator arithExpression { printf("Evaluated comparison expression with comparator.\n"); }
               | arithExpression { printf("Evaluated simple arithmetic expression.\n"); }
;

Comparator: EQ { printf("Comparator: ==\n"); }
          | NEQ { printf("Comparator: !=\n"); }
          | LT { printf("Comparator: <\n"); }
          | GT { printf("Comparator: >\n"); }
          | LE { printf("Comparator: <=\n"); }
          | GE { printf("Comparator: >=\n"); }
;

// Arithmetic Expressions

arithExpression : term1 { printf("Processed term1.\n"); }
                | arithExpression PLUS term1 { printf("Processed addition.\n"); }
                | arithExpression MINUS term1 { printf("Processed subtraction.\n"); }
;

term1 : term2 { printf("Processed term2.\n"); }
     | term1 MULTIPLY term2 { printf("Processed multiplication.\n"); }
     | term1 DIVIDE term2 { printf("Processed division.\n"); }
     
;

term2 : term3 { printf("Processed term3.\n"); }
      | term3 POWER term2 { printf("Processed exponentiation.\n"); }
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
$$ = val;



 }
      | factor { $$ = $1; }
;

factor : INTEGER_VAL { $$ = $1; }
       | FLOAT_VAL { $$ = $1;}
       | ID {

SymbolTable* entryScope =  symbolHier.getEntryScope($1);

if(!entryScope)
{
  yyerror("Variable is not declared\n");
}else{
  //variable is declared and we have its scope table now lets get the entry from the table
  SymbolTableEntry* entry = entryScope->getEntry($1);
  if(!entry->getIsInitialized())
  {
    yyerror("Variable is not initiliazed\n");
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
SymbolTable* localTable = new SymbolTable("Local"+to_string(num_scopes), symbolHier.currentScopeTable);
num_scopes = num_scopes +1;
//add table as a child to current
symbolHier.currentScopeTable->addChild(localTable);
symbolHier.addSymbolTable(globalTable);
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
ifStatement : ifScope {} //unmatched
            | ifScope elseScope {} //matched
;

ifScope : IF_mark '(' expression ')' scope  {
  printf("IF statement ends\n");
}
;
IF_mark : IF {
            printf("IF statement begins\n");
};
elseScope : ELSE_mark scope {
   printf("ELSE statement ends\n");
};
ELSE_mark : ELSE {
        printf("ELSE statement begins\n");
};

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
function : functionSig scope {printf("Function ends\n");}
         | functionSig ';' {
          //no need to put this in symbol table
      

         }
;
functionSig : dataType ID '(' dataType ID functionParams ')' { 
  printf("Starting params list\n");}
            | dataType ID '(' dataType ID ASSIGN expression defaultParams ')' { printf("Starting params list\n");}
            | dataType ID '('')' { printf("Starting params list\n");}
            | VOID ID '(' dataType ID functionParams ')' { printf("Starting params list\n");}
            | VOID ID '(' dataType ID ASSIGN expression defaultParams ')' { printf("Starting params list\n");}
            | VOID ID '('')' { printf("Starting params list\n");}
; 
// returnType: dataType{}
//           | VOID{}
// ;

functionParams : ',' dataType ID functionParams{
}
               | defaultParams {}
;
defaultParams : ',' dataType ID ASSIGN expression defaultParams  {}
              | epsilon {}
;
//Second function call

functionCall : ID '(' expression functionCallParams  ')'{printf("Calling functions %s\n",$1);}
             | ID '(' ')'{printf("Calling function %s\n",$1);}
;

functionCallParams :  ',' expression functionCallParams {}
                   | epsilon {}
;

epsilon : {}
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

SymbolTable* localTable = new SymbolTable("Local"+to_string(num_scopes), symbolHier.currentScopeTable);
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

int main(int argc, char** argv){

  FILE *file = fopen(argv[1], "r");

  if(file == NULL){
    yyerror("File not found!\n");
    return 1;
  }
  yyin = file;
  yyout = fopen("errors.txt", "w");

if (yyparse() == 0) {
    printf("Program parsed successfully.\n");
} else {
    printf("Program did not parse due to syntax errors.\n");
}
    
  MotherSymbolTree.printAllTables();
  fclose(yyin);
  fclose(yyout);
  return 0;
}
