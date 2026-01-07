#include <stdio.h>

int main() {
    int arr[100]; // Declare an array to store up to 100 integers
    int size, i, sum = 0;

    printf("Enter the number of elements (size of the array, max 100):\n");
    scanf("%d", &size);

    if (size <= 0 || size > 100) {
        printf("Invalid array size. Please enter a size between 1 and 100.\n");
        return 1; // Exit the program with an error code
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to the sum as it's entered
    }

    printf("\nSum of all elements in the array = %d\n", sum);

    return 0;
}
