#include "stdio.h"

int main(void)
{
    int i,sum=0;
    printf("Enter an integer :");
    fflush(stdin);fflush(stdout);
    scanf("%d",&i);
    
    for (int j = 1; j <= i; j++) 
    sum+=j;
    
    printf("sum = %d",sum);
    return 0;
}