#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int n, element ,location;

    printf("Enter number of elements:");
    fflush(stdin);fflush(stdout);
    scanf("%d", &n);
    int* arr1=  (int*)malloc(sizeof(int)*(n));
    
    for(int i=0 ; i< n  ;i++)
    scanf("%d", arr1+i);

    printf("Enter the elment to be searched:");
    fflush(stdin);fflush(stdout);
    scanf("%d", &element);

    int i=0;
    for (; i < n; i++)
    if (arr1[i]==element)break;
    printf("Number found at the location = %d",i+1);
    free(arr1);
    return 0;
}