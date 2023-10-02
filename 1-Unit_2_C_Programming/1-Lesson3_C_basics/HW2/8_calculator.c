#include "stdio.h"

int main(void)
{
    float num1,num2;
    char op;

    printf("Enter operator + or - or * or / :");
    fflush(stdin);fflush(stdout);
    scanf("%c",&op);
    
    printf("Enter two operands :");
    fflush(stdin);fflush(stdout);
    scanf("%f %f",&num1,&num2);
    
    switch (op)
    {
    case '+':
        printf("%f + %f = %f",num1, num2,num1+num2);
        break;
    
    case '-':
        printf("%f - %f = %f",num1, num2,num1-num2);
        break;
    
    case '*':
        printf("%f * %f = %f",num1, num2,num1*num2);
        break;
    
    case '/':
        printf("%f / %f = %f",num1, num2,num1/num2);
        break;
    default:
        break;
    }
    
    return 0;
}