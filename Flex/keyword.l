%{
#include <stdio.h>
#include <string.h>
%}

%%
"int"|"float"|"char"|"void"|"if"|"else"|"while"   { printf("%s is a keyword\n", yytext); }
.                                                 { printf("Not a keyword\n"); }
%%
int yywrap() {
    return 1; 
}

int main() {
    char input[100];
    
    printf("Enter an input string:");
    scanf("%s", input);
    
    yy_scan_string(input);  
    
    yylex();
    
    printf("Name: Sunil\nSymbol no. : 23508\n");   //aafno name ra symbol hala
    
    return 0;
}
