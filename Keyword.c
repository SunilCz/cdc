#include <stdio.h>
#include <string.h>

int isKeyword(const char *str) {
    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while"
    };
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1; // It's a keyword
        }
    }
    return 0; // It's not a keyword
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (isKeyword(input)) {
        printf("%s is a keyword.\n", input);
    } else {
        printf("%s is not a keyword.\n", input);
    }
printf("Name: Sunil\n");
    printf("Symbol No: 23508\n");
    return 0;
}
