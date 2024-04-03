
#include <stdio.h>

int insertElement(int arr[], int *size, int capacity, int element, int position) {

    if (*size >= capacity) {
        printf("Array is full. Insertion failed.\n");
        return -1;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position. Insertion failed.\n");
        return -1;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    (*size)++;
    
    return 0; 
}
