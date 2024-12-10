%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex(void);  // Forward declaration for yylex
    void yyerror(const char *s);  // Forward declaration for yyerror
    extern FILE* yyin;                          
    extern FILE* yyout;  
    int yylineno = 1;  
%}

%union {
    int intValue;
    float floatValue;
    char charValue;
    char* stringValue;
    int boolValue;
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



%type <stringValue> dataType line start_line_mark ID expression arithExpression compExpression andLogExpression logExpression notLogExpression scope startScope endScope ifStatement ifScope elseScope IF_mark ELSE_mark WHILE_mark DO_mark doWhile function functionSig functionParams defaultParams functionCall functionCallParams epsilon returnStatement forLoop FOR_mark forLoop1 switchCase multiCase singleCase

%%

//Production Rules

program : script {}
;

script : start_line_mark line {}
       | script start_line_mark line{}
;
start_line_mark : {printf("Processing line %d in the script.\n",yylineno);};
// Variable Declaration

line : dataType ID ';' { printf("Declared variable %s of type %s\n", $2, $1); }
     | dataType ID ASSIGN expression ';' { printf("Assigned value to variable %s\n", $2); }
     | CONST  dataType ID ASSIGN expression ';'{ printf("Assigned constant value to %s\n", $3); }
     | ID ASSIGN expression  ';';
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


dataType : INT { $$ = "int"; printf("Data type: int\n"); }
         | FLOAT { $$ = "float"; printf("Data type: float\n"); }
         | CHAR { $$ = "char"; printf("Data type: char\n"); }
         | STRING { $$ = "string"; printf("Data type: string\n"); }
         | BOOL { $$ = "bool"; printf("Data type: bool\n"); }
;
ID : IDENTIFIER { $$ = $1; printf("Identifier: %s\n", $1); }
   ;

/*#########################################################################*/
expression : logExpression{ printf("Evaluated logical expression.\n"); }
           | functionCall{}
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

term3 : MINUS term3 { printf("Processed unary minus.\n"); }
      | factor { printf("Processed factor.\n"); }
;

factor : INTEGER_VAL { printf("Integer value: %d\n", $1); }
       | FLOAT_VAL { printf("Float value: %f\n", $1); }
       | CHAR_VAL{}
       | STRING_VAL{}
       | ID { printf("Identifier value: %s\n", $1); }
       | '(' logExpression ')' { printf("Processed parenthesis with logical expression.\n"); }
;
/*###########################################################################################*/
// Scopes
scope : startScope script endScope {}
           | startScope endScope {}
;

startScope : '{' { 
                    printf("Scope Begin\n"); 
                 
                  }
;

endScope : '}' {
                   printf("Scope End\n"); 
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
function : functionSig scope {printf("Function ends\n")}
         | functionSig ';' {}
;
functionSig : dataType ID '(' dataType ID functionParams ')' { printf("Starting params list\n")}
            | dataType ID '(' dataType ID ASSIGN expression defaultParams ')' { printf("Starting params list\n")}
            | dataType ID '('')' { printf("Starting params list\n")}
            | VOID ID '(' dataType ID functionParams ')' { printf("Starting params list\n")}
            | VOID ID '(' dataType ID ASSIGN expression defaultParams ')' { printf("Starting params list\n")}
            | VOID ID '('')' { printf("Starting params list\n")}
; 
// returnType: dataType{}
//           | VOID{}
// ;

functionParams : ',' dataType ID functionParams{}
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
forLoop : FOR_mark '(' forLoop1  ';' expression ';' ID ASSIGN expression ')' scope  {}
        ;
      
FOR_mark : FOR {printf("Starting for loop\n");}
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
  if(argc != 2){
    yyerror("Please enter filename only!");
    return 1;
  }

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
    
  fclose(yyin);
  fclose(yyout);
  return 0;
}
