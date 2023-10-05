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
    {
  //  fflush(stdin);fflush(stdout);
    scanf("%d", arr1+i);
    }
    printf("Enter the elment to be inserted:");
    fflush(stdin);fflush(stdout);
    scanf("%d", &element);
    printf("Enter the location :");
    fflush(stdin);fflush(stdout);
    scanf("%d", &location);
    int *arr2 = (int *)malloc(sizeof(int) * (n+1));
    int flag=0;
    for (int i = 0; i < n+1; i++)
    {  if (i==location-1)
      {
        arr2[i]=element;
        flag=1;
        continue;
      }arr2[i]=arr1[i-flag];
    }
    for (int i = 0; i < n+1; i++)printf("%d ",arr2[i]);
    free(arr1);free(arr2);
    return 0;
}