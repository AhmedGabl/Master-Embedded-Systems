#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int powerNumber(int num,int power){
    if (power==1)return num ;
    else return num * powerNumber(num,power-1);
}

int main(void)
{
   int num,power;
    printf("Enter base number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);
    
    printf("Enter power number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &power);

    printf("%d^%d = %d",num,power,powerNumber(num,power));

    return 0;
}