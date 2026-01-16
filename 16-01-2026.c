#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], clean[100];
    int i, j = 0, len, isPalindrome = 1;

    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) return 1;
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum((unsigned char)str[i])) {
            clean[j++] = tolower((unsigned char)str[i]);
        }
    }
    clean[j] = '\0';

    len = strlen(clean);
    for (i = 0; i < len / 2; i++) {
        if (clean[i] != clean[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

