%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int operatorCount = 0;
%}

%%
[0-9]+         { printf("t%d = %s\n", yylineno, yytext); }
[-+*/]         { printf("t%d = t%d %s t%d\n", yylineno, yylineno-2, yytext, yylineno-1); }
\n             { /* Ignore newline character */ }
.              { printf("Invalid input\n"); exit(1); }
%%

int yywrap() {
    return 1; 
}

int main() {
    char input[100];
    
    printf("Enter an arithmetic expression:\n");
    yylex();
    
    printf("Number of operators: %d\n", operatorCount);
    printf("Name: Sunil\nSymbol no. : 23508\n");  // aafno name ra symbol no. halnu
    
    return 0;
}
