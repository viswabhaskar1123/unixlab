
#include <stdio.h>
#define MAX_SIZE 100
#include "head.h"
int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; 
    int position = 2; 
    int capacity = MAX_SIZE; 
    int element = 10;
  
    if (insertElement(arr, &size, capacity, element, position) == 0) {
        printf("Element inserted successfully.\n");

 
        printf("Updated array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    if (deleteElement(arr, &size, position) == 0) {
        printf("Element at position %d deleted successfully.\n", position);


        printf("Updated array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
