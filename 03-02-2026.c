#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;
    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;
        if (tolower(str[left]) != tolower(str[right])) return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char str[200];
    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) return 1;
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
