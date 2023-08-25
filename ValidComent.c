#include <stdio.h>
#include <string.h>

int main() {
    char com[100];
    int i = 2, a = 0;

    printf("Enter comment: ");
    fgets(com, sizeof(com), stdin);
    com[strcspn(com, "\n")] = '\0'; // Remove the newline character from input

    if (com[0] == '/') {
        if (com[1] == '/')
            printf("It is a comment\n");
        else if (com[1] == '*') {
            for (i = 2; i <= 100; i++) {
                if (com[i] == '*' && com[i + 1] == '/') {
                    printf("It is a comment\n");
                    a = 1;
                    break;
                } else if (com[i] == '\0') {
                    break; // End of string
                }
            }
            if (a == 0)
                printf("It is not a comment\n");
        } else {
            printf("It is not a comment\n");
        }
    } else {
        printf("It is not a comment\n");
    }
printf("Name: Sunil\n");
    printf("Symbol No: 23508\n");
    return 0;
}
