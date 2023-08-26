#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char *token) {
    char keywords[32][15] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed", "sizeof",
        "static", "struct", "switch", "typedef", "union", "unsigned", "void",
        "volatile", "while"
    };

    for (int i = 0; i < 32; i++) {
        if (strcmp(keywords[i], token) == 0) {
            return 1;
        }
    }

    return 0;
}

int main() {
    char input[1000];
    printf("Enter any token:\n");
    fgets(input, sizeof(input), stdin);

    char *token = strtok(input, " \t\n");

    while (token != NULL) {
        if (isKeyword(token)) {
            printf("Keyword: %s\n", token);
        } else if (isalpha(token[0])) {
            printf("Identifier: %s\n", token);
        } else if (isdigit(token[0])) {
            printf("Constant: %s\n", token);
        } else {
            printf("Operator or Symbol: %s\n", token);
        }

        token = strtok(NULL, " \t\n");
    }
printf("Name: Sunil\n");
    printf("Symbol No: 23508\n");
    return 0;
}
