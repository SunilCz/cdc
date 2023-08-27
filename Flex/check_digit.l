%{
#include<stdio.h>
#include<stdlib.h>
%}
/* Rule Section */
%%
^[0-9]*    printf("DIGIT\n");
^[^0-9]|[0-9]*[a-zA-Z]    printf("NOT A DIGIT\n");
.          printf("Invalid input\n");
%%
int yywrap() {
    return 1; 
}

int main() {
    char input[100];
    
    printf("Enter an input string:\n");
    scanf("%s", input);
    
    yy_scan_string(input);  
    
    yylex();
    
    printf("Name: Sunil\nSymbol no. : 23508\n");   //aafno name ra symbol hala
    
    return 0;
}
