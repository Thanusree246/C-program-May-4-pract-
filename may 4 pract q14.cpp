#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d is a multiple of both 3 and 5.\n", num);
    } else if (num % 3 == 0) {
        printf("%d is a multiple of 3.\n", num);
    } else if (num % 5 == 0) {
        printf("%d is a multiple of 5.\n", num);
    } else {
        printf("%d is not a multiple of either 3 or 5.\n", num);
    }

    return 0;
}

