#include "stdio.h"
#include "stdlib.h"

void print_arr(int* a,int rows ,int columns){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ",*((a+i*columns)+j));
        }    
        printf("\n");
    }
}

int main(void)
{
    int rows,columns;
    printf("Enter rows and column of matrix:");
    fflush(stdin);fflush(stdout);
    scanf("%d", &rows);
    scanf("%d", &columns);
    int *arr1 = (int *)malloc(sizeof(int) *rows*columns );
    int *arr_t = (int *)malloc(sizeof(int) *rows*columns );

    for ( int i = 0; i < rows; i++)
    for (int j = 0; j < columns; j++)
    {
    printf("Enter Element a%d%d:",i+1,j+1);
    fflush(stdin);fflush(stdout);
    scanf("%d",(arr1 + i*columns)+j);        
    }
    
    printf("Entered matrix\n");
    print_arr(arr1,rows,columns);

    for (int i = 0; i < rows; i++)
    for (int j = 0; j < columns; j++)
    {
        *(arr_t+j*rows+i)=*(arr1+i*columns+j);
    }

    printf("Transpose matrix\n");print_arr(arr_t,columns,rows);
    free(arr1);free(arr_t);   
    return 0;
}