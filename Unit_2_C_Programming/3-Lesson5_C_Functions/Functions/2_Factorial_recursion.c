#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int Factorial(int i){
    if (i==0)return 1;
else return i*Factorial(i-1);
}

int main(void)
{
   int n;
    printf("Enter a positive integer:");
    fflush(stdin);fflush(stdout);
    scanf("%d", &n);

    printf("Factorial of %d =  ",n);
    printf("%d ",Factorial(n));
  
    return 0;
}