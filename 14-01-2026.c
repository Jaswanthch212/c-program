#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder;
    long long sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum > 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }

    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
