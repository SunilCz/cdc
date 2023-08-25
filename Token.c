#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TOKEN_KEYWORD 1
#define TOKEN_IDENTIFIER 2
#define TOKEN_OPERATOR 3
#define TOKEN_LITERAL 4
#define TOKEN_SEPARATOR 5

int classifyToken(const char *token) {
    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while"
    };
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    if (isalpha(token[0]) || token[0] == '_') {
        for (int i = 1; token[i] != '\0'; i++) {
            if (!isalnum(token[i]) && token[i] != '_') {
                return TOKEN_IDENTIFIER;
            }
        }
        for (int i = 0; i < numKeywords; i++) {
            if (strcmp(token, keywords[i]) == 0) {
                return TOKEN_KEYWORD;
            }
        }
        return TOKEN_IDENTIFIER;
    } else if (isdigit(token[0])) {
        return TOKEN_LITERAL;
    } else if (strchr("+-*/=<>!&|", token[0]) != NULL) {
        return TOKEN_OPERATOR;
    } else if (strchr(",;(){}[]", token[0]) != NULL) {
        return TOKEN_SEPARATOR;
    }

    return -1;
}

int main() {
    char input[1000];
    printf("Enter a C code snippet:\n");
    fgets(input, sizeof(input), stdin);

    char delimiters[] = " \t\n(){}[];,"; // Include separators
    char *token = strtok(input, delimiters);

    while (token != NULL) {
        int tokenType = classifyToken(token);

        switch (tokenType) {
            case TOKEN_KEYWORD:
                printf("Token: %s (Type: Keyword)\n", token);
                break;
            case TOKEN_IDENTIFIER:
                printf("Token: %s (Type: Identifier)\n", token);
                break;
            case TOKEN_OPERATOR:
                printf("Token: %s (Type: Operator)\n", token);
                break;
            case TOKEN_LITERAL:
                printf("Token: %s (Type: Literal)\n", token);
                break;
            case TOKEN_SEPARATOR:
                printf("Token: %s (Type: Separator)\n", token);
                break;
            default:
                printf("Token: %s (Type: Unknown)\n", token);
                break;
        }

        token = strtok(NULL, delimiters);
    }
 printf("Name: Sunil\n");
    printf("Symbol No: 23508\n");
    return 0;
}
