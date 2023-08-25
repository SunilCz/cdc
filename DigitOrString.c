//Wap to check whether the given input is a digit or a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_Digit(char c) {
    return c >= '0' && c <= '9';
}

int is_String(char c) {
    return isalpha(c) || c == '_';
}

int main() {
    char str[100];
    printf("Enter any inputs: ");
    scanf("%s", str);

    if (is_Digit(str[0])) {
        printf("The first character is a digit.\n");
    } else if (is_String(str[0])) {
        printf("The first character is a string.\n");
    } else {
        printf("The first character is neither a digit nor a string.\n");
    }

 
    printf("Name: Sunil\n");
    printf("Symbol No: 23508\n");

    return 0;
}
