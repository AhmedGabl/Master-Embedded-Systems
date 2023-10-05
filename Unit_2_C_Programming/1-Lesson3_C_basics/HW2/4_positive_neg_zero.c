#include "stdio.h"

int main(void)
{
    float  num1 ;
    printf("Enter a num :");
    fflush(stdin);fflush(stdout);
    scanf("%f",&num1);
    (num1>0)?printf("%f is positive",num1):(num1<0)?printf("%f is negative",num1):printf("you entered zero");
    return 0;
}
