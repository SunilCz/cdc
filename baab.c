//Wap to construct dfa that accepts string baab.
#include <stdio.h>
#include <string.h>

int main() {
    int currentState = 0;
    char inputString[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", inputString);

    while (inputString[i] != '\0') {
        char currentInput = inputString[i];

        switch (currentState) {
            case 0:
                if (currentInput == 'b') {
                    currentState = 1;
                } else {
                    currentState = 4;
                }
                break;

            case 1:
                if (currentInput == 'a') {
                    currentState = 2;
                } else {
                    currentState = 4;
                }
                break;

            case 2:
                if (currentInput == 'a') {
                    currentState = 3;
                } else {
                    currentState = 4;
                }
                break;

            case 3:
                if (currentInput == 'b') {
                    currentState = 3;
                } else {
                    currentState = 4;
                }
                break;

            case 4:
                break;
        }

        i++;
    }

    if (currentState == 3) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
 printf("Name: Sunil\n");
    printf("Symbol No: 23508\n");
    return 0;
}
