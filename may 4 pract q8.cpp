#include <stdio.h>

int main() {
    int num, i=2, flag=0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (i <= num/2) {
        if (num%i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0 && num > 1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    return 0;
}
