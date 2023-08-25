//Wap to check whether the given input is a valid identifier or not.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int i = 0, valid = 0;
    char keyw[10][10] = {"int", "float", "break", "long", "char", "for", "if", "switch", "else", "while"};
    char a[10];
    
    printf("Enter a string: ");
    scanf("%s", a);

    for (i = 0; i < 10; i++) {
        if ((strcmp(keyw[i], a) == 0)) {
            valid = 1;
            break;
        }
    }

    if (valid == 1) {
        printf("\n%s is Keyword.\n", a);
    } else {
        valid = 0;

        if ((a[0] == '_') || (isalpha(a[0]) != 0)) {
            for (i = 1; a[i] != '\0'; i++) {
                if ((isalnum(a[i]) == 0) && (a[i] != '_')) {
                    valid = 1;
                    break;
                }
            }
        } else {
            valid = 1;
        }

        if (valid == 0) {
            printf("\n%s is a ValidIdentifier.\n", a);
        } else {
            printf("\n%s is Not a ValidIdentifier.\n", a);
        }
    }
    printf("Name: Sunil\n");
    printf("Symbol No: 23508\n");

    return 0;
}
