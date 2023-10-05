#include "stdio.h"

int main(void)
{
    float  num1,num2, num3,temp ;
    printf("Enter three nums :");
    fflush(stdin);fflush(stdout);
    scanf("%f %f %f",&num1,&num2,&num3);
    (num1>num2)?(num1>num3)?(temp=num1):(temp=num3):(num2>num3)?(temp=num2):(temp=num3);
    printf("largest number = %0.2f",temp);
    return 0;
}
