

#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100];
    int *p = arr;
    int temp;

    printf("Enter number of salaries: ");
    scanf("%d", &n);

    printf("Enter salaries:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", (p + i));
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(p + i) > *(p + j)) {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    printf("Sorted salaries:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}