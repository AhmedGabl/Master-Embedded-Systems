#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int size) {

    for (int i = 0; i < size/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

int main() {
    
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // printf("Enter the size of the array: ");
    // scanf("%d", &size);

    // int *arr = (int *)malloc(size * sizeof(int));

    // if (arr == NULL) {
    //     printf("Memory allocation failed.\n");
    //     return 1;
    // }

    // printf("Enter %d elements for the array: ", size);
    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    printf("Original array: %d \n ",size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
