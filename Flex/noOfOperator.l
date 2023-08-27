%{
#include <stdio.h>
#include <string.h>
int operatorCount = 0;
%}

%%
[+\-*/=]     { operatorCount++; }
.            { /* Ignore other characters */ }
%%

int yywrap() {
    return 1; 
}

int main() {
    char input[100];
    
    printf("Enter an input string:\n");
    fgets(input, sizeof(input), stdin);
    yy_scan_string(input);
    yylex();
    
    printf("Number of operators: %d\n", operatorCount);
    printf("Name: Sunil\nSymbol no. : 23508\n"); //aafno name ra symbol hala
    
    return 0;
}
