//Wap to construct dfa that accepts string abba.
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
                if (currentInput == 'a') {
                    currentState = 1;
                } else {
                    currentState = 5;
                }
                break;

            case 1:
                if (currentInput == 'b') {
                    currentState = 2;
                } else {
                    currentState = 5;
                }
                break;

            case 2:
                if (currentInput == 'b') {
                    currentState = 3;
                } else {
                    currentState = 5;
                }
                break;

            case 3:
                if (currentInput == 'a') {
                    currentState = 4;
                } else {
                    currentState = 5;
                }
                break;

            case 4:
                currentState = 5; // Extra inputs should go to the rejected state
                break;

            case 5:
                break;
        }

        i++;
    }

    if (currentState == 4) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }
    
    printf("Name: Sunil\n");
    printf("Symbol No: 23508\n");
    
    return 0;
}
