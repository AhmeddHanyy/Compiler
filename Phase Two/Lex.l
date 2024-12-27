%{
#include "yacc.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void yyerror(char *);  // Error reporting function
extern int yylineno;   // Line number for debugging
int yylex();           // Lexer function declaration
%}

DIGIT       [0-9]
LETTER      [a-zA-Z]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT}|_)*

INTEGER_VAL  (0|[1-9][0-9]*)
FLOAT_VAL    [0-9]+\.[0-9]+
CHAR_VAL     \'.\'
STRING_VAL   \"[^\"]*\"
BOOL_VAL     (0|1)\b


%%


"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"do"    {return DO;}
"void"  {return VOID;}
"return" {return RETURN;}
"for"   {return FOR;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"switch" {return SWITCH;}
"case" {return CASE;}
"default" {return DEFAULT;}
[{()}]     { return *yytext; }
[ \t]       ; 
"//".*   {;}
"/*"([^\*]|[\r\n]|(\*+([^\*/]|[\r\n])))*"*"+"/" {;}
[\n]   {yylineno++;}

"int"           { 
                    //printf("Token: INT\n"); 
                    return INT; 
                 }

"float"         { 
                    //printf("Token: FLOAT\n"); 
                    return FLOAT; 
                 }

"char"          { 
                    //printf("Token: CHAR\n"); 
                    return CHAR; 
                 }

"string"        { 
                    //printf("Token: STRING\n"); 
                    return STRING; 
                 }

"bool"          { 
                    //printf("Token: BOOL\n"); 
                    return BOOL; 
                 }

"const"         { 
                    //printf("Token: CONST\n"); 
                    return CONST; 
                 }

{IDENTIFIER}    { 
                    //printf("Token: IDENTIFIER - %s\n", yytext); 
                    yylval.idValue = strdup(yytext); 
                    return IDENTIFIER; 
                 }

{INTEGER_VAL}   { 
                    //printf("Token: INTEGER_VAL - %s\n", yytext); 
                    yylval.intValue = strdup(yytext); 
                    return INTEGER_VAL; 
                 }

{FLOAT_VAL}     { 
                    //printf("Token: FLOAT_VAL - %s\n", yytext); 
                    yylval.floatValue = strdup(yytext); 
                    return FLOAT_VAL; 
                 }

{STRING_VAL}    { 
                    //printf("Token: STRING_VAL - %s\n", yytext); 
                    yylval.stringValue = strdup(yytext); 
                    return STRING_VAL; 
                 }

{CHAR_VAL}      { 
                    //printf("Token: CHAR_VAL - %s\n", yytext); 
                    yylval.charValue = yytext[0]; 
                    return CHAR_VAL; 
                 }

{BOOL_VAL}      { 
                    //printf("Token: BOOL_VAL - %s\n", yytext); 
                    yylval.boolValue = strdup(yytext); 
                    return BOOL_VAL; 
                 }

"+"             { 
                    //printf("Token: PLUS\n"); 
                    yylval.charValue = '+'; 
                    return PLUS; 
                 }

"-"             { 
                    //printf("Token: MINUS\n"); 
                    yylval.charValue = '-'; 
                    return MINUS; 
                 }

"*"             { 
                    //printf("Token: MULTIPLY\n"); 
                    yylval.charValue = '*'; 
                    return MULTIPLY; 
                 }

"/"             { 
                    //printf("Token: DIVIDE\n"); 
                    yylval.charValue = '/'; 
                    return DIVIDE; 
                 }

"^"             { 
                    //printf("Token: POWER\n"); 
                    yylval.charValue = '^'; 
                    return POWER; 
                 }

"="             { 
                    //printf("Token: ASSIGN\n"); 
                    yylval.charValue = '='; 
                    return ASSIGN; 
                 }

"&&"            { 
                    //printf("Token: AND\n"); 
                    yylval.stringValue = "&&"; 
                    return AND; 
                 }

"||"            { 
                    //printf("Token: OR\n"); 
                    yylval.stringValue = "||"; 
                    return OR; 
                 }

"!"             { 
                    //printf("Token: NOT\n"); 
                    yylval.charValue = '!'; 
                    return NOT; 
                 }

"=="            { 
                    //printf("Token: EQ\n"); 
                    yylval.stringValue = "=="; 
                    return EQ; 
                 }

"!="            { 
                    //printf("Token: NEQ\n"); 
                    yylval.stringValue = "!="; 
                    return NEQ; 
                 }

"<"             { 
                    //printf("Token: LT\n"); 
                    yylval.charValue = '<'; 
                    return LT; 
                 }

">"             { 
                    //printf("Token: GT\n"); 
                    yylval.charValue = '>'; 
                    return GT; 
                 }

"<="            { 
                    //printf("Token: LE\n"); 
                    yylval.stringValue = "<="; 
                    return LE; 
                 }

">="            { 
                    //printf("Token: GE\n"); 
                    yylval.stringValue = ">="; 
                    return GE; 
                 }

";" {return ';';}
"," {return ',';}
":" {return ':';}
. {return yytext[0];}







%%

int yywrap() { 
    return 1; 
}
