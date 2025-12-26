#include <stdio.h>

int main() {
    int number;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1; // Exit with error
    }

    // Example 1: Simple if statement
    if (number > 0) {
        printf("The number is positive.\n");
    }

    // Example 2: if-else statement
    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    // Example 3: if-else-if ladder
    if (number > 0) {
        printf("It is greater than zero.\n");
    } else if (number < 0) {
        printf("It is less than zero.\n");
    } else {
        printf("It is exactly zero.\n");
    }

    // Example 4: Nested if statement
    if (number != 0) {
        if (number % 5 == 0) {
            printf("The number is divisible by 5.\n");
        } else {
            printf("The number is not divisible by 5.\n");
        }
    } else {
        printf("Zero is divisible by every number.\n");
    }

    return 0;
}
