#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 5

typedef struct {
    int *array;
    int size;
    int capacity;
} DynamicArray;

void initArray(DynamicArray *arr) {
    arr->array = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
    arr->size = 0;
    arr->capacity = INITIAL_CAPACITY;
}

void insertElement(DynamicArray *arr, int element) {
    if (arr->size == arr->capacity) {
        arr->capacity *= 2;
        arr->array = (int *)realloc(arr->array, arr->capacity * sizeof(int));
        if (arr->array == NULL) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }
    arr->array[arr->size++] = element;
}

void displayArray(DynamicArray *arr) {
    if (arr->size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->array[i]);
    }
    printf("\n");
}

void removeElement(DynamicArray *arr, int index) {
    if (index < 0 || index >= arr->size) {
        printf("Invalid index.\n");
        return;
    }
    for (int i = index; i < arr->size - 1; i++) {
        arr->array[i] = arr->array[i + 1];
    }
    arr->size--;
}

void freeArray(DynamicArray *arr) {
    free(arr->array);
    arr->array = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

int main() {
    DynamicArray arr;
    initArray(&arr);

    insertElement(&arr, 10);
    insertElement(&arr, 20);
    insertElement(&arr, 30);
    insertElement(&arr, 40);
    displayArray(&arr);

    removeElement(&arr, 1);
    displayArray(&arr);

    insertElement(&arr, 50);
    displayArray(&arr);

    freeArray(&arr);

    return 0;
}
