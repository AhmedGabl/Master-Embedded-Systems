#include "stdio.h"

int main(void)
{

    float num1,num2;

    printf("Enter a :");
    fflush(stdin);fflush(stdout);
    scanf("%f",&num1);
    printf("Enter b :");
    fflush(stdin);fflush(stdout);
    scanf("%f",&num2);

    num1+=num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("After swapping, a= :%f\n",num1);
    printf("After swapping, b= :%f",num2);
    return 0;
}
