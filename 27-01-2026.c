#include <stdio.h>
#include <limits.h>

long long factorial(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        long long result = factorial(num);
        if (result == -1) {
            printf("Error calculating factorial. Check the input value range.\n");
        } else {
            printf("Factorial of %d is %lld.\n", num, result);
        }
    }

    return 0;
}
