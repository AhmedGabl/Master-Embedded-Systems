#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int n;

    printf("Enter the number of data:",n);
    fflush(stdin);fflush(stdout);
    scanf("%d", &n);

    float *arr1 = (float *)malloc(sizeof(float) * n);

    printf("Enter the elements of 1st matrix\n");
    int j = 0;
    for (; j < n; j++)
    {
        printf("Enter number:");
        fflush(stdin);
        fflush(stdout);
        scanf("%f",(arr1 + j));
        if (j > 0)
            arr1[j] += arr1[j - 1];
    }
    printf("Average= %f", arr1[n-1]/n);
    return 0;
}