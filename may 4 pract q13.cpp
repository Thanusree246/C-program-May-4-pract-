#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("The character is uppercase.\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("The character is lowercase.\n");
    } else {
        printf("The character is not a letter.\n");
    }

    return 0;
}

