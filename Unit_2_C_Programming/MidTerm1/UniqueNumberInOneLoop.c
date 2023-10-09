#include <stdio.h>

int findUniqueNumber(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr1[] = {4, 2, 5, 2, 5, 7, 4};
    int arr2[] = {4, 2, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf(" {4, 2, 5, 2, 5, 7, 4} Unique number: %d\n", findUniqueNumber(arr1,size1)); 
    printf("{4, 2, 4} Unique number: %d\n", findUniqueNumber(arr2,size2)); 

    return 0;
}
