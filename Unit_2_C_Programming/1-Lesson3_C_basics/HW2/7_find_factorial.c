#include "stdio.h"

int main(void)
{
    int i,sum=1;

    printf("Enter an integer :");
    fflush(stdin);fflush(stdout);
    scanf("%d",&i);
    
    if(i<0){
    printf("Error!!! Factorial of negartive number doesn't exist");
    //return 0;
    }
    
    else if (i>0) {
    {for (int j = 1; j <= i; j++) sum*=j;} 
    
    printf("Factorial = %d",sum);}
    else
    printf("Factorial=1");
    return 0;
}