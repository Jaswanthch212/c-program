#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int l;
    int i;
    char *begin, *end, temp;

    l = strlen(str);
    begin = str;
    end = str;

    for (i = 0; i < l - 1; i++)
        end++;

    for (i = 0; i < l / 2; i++) {
        temp = *end;
        *end = *begin;
        *begin = temp;

        begin++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string is: %s\n", str);

    return 0;
}
