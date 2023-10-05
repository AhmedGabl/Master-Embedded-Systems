#include "stdio.h"

int main(void)
{   float arr1[2][2]={0};
    float arr2[2][2]={0};

printf("Enter the elements of 1st matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter a%d%d:",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",*(arr1+i)+j);
        }    
    }

printf("Enter the elements of 2st matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter b%d%d:",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",*(arr2+i)+j);
            arr1[i][j]+=arr2[i][j];
        }    
    }

printf("Sum of matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%0.1f ",arr1[i][j]);
        }    
        printf("\n");
    }

    return 0;
}