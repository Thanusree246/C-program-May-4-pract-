#include <stdio.h>

int main() {
    float grade;
    
    printf("Enter your grade (0-100): ");
    scanf("%f", &grade);
    
    if (grade >= 90) {
        printf("Your letter grade is A.\n");
    } else if (grade >= 80) {
        printf("Your letter grade is B.\n");
    } else if (grade >= 70) {
        printf("Your letter grade is C.\n");
    } else if (grade >= 60) {
        printf("Your letter grade is D.\n");
    } else {
        printf("Your letter grade is F.\n");
    }
    
    return 0;
}
