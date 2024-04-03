
#include <stdio.h>

int deleteElement(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty. Deletion failed.\n");
        return -1;
    }
    if (position < 0 || position >= *size) {
        printf("Invalid position. Deletion failed.\n");
        return -1;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
 
    return 0; 
}
