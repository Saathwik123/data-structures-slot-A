#include <stdio.h>
#include <ctype.h>

int isValidString(const char *str) {
    while (*str) {
        if (!isalpha(*str)) {
            return 0; // Not a valid string
        }
        str++;
    }
    return 1; // Valid string
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);

    if (isValidString(input)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }

    return 0;
}
