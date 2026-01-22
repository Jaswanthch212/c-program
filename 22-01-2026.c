#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char inputString[100];
    char *original;
    char *reversed;
    int length;

    printf("Enter a string: ");
    scanf("%s", inputString);

    length = strlen(inputString);

    original = (char*)malloc((length + 1) * sizeof(char));
    reversed = (char*)malloc((length + 1) * sizeof(char));

    if (original == NULL || reversed == NULL) {
        printf("Memory allocation failed. Exiting.\\n");
        return 1;
    }

    strcpy(original, inputString);

    for (int i = 0; i < length; i++) {
        reversed[i] = original[length - 1 - i];
    }
    reversed[length] = '\\0';

    printf("Original string: %s\\n", original);
    printf("Reversed string: %s\\n", reversed);

    free(original);
    free(reversed);

    return 0;
}
