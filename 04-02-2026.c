#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int rows, cols;
    printf("Enter a string: ");
    scanf("%49s", str);
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid input.\n");
        return 1;
    }
    int len = strlen(str), i, j, k;
    for (i = 0; i < rows; i++) {
        k = 0;
        for (j = 0; j < cols; j++) {
            printf("%c", str[k]);
            k = (k + 1) % len;
        }
        printf("\n");
    }
    return 0;
}
