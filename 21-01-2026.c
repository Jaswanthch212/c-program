#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "Hello World! 123";
    int i;
    int uppercase_count = 0;
    int digit_count = 0;

    for (i = 0; i < strlen(str); i++) {
        if (isupper(str[i])) {
            uppercase_count++;
        }
        if (isdigit(str[i])) {
            digit_count++;
        }
    }

    printf("Original string: %s\n", str);
    printf("Number of uppercase characters: %d\n", uppercase_count);
    printf("Number of digits: %d\n", digit_count);

    return 0;
}
