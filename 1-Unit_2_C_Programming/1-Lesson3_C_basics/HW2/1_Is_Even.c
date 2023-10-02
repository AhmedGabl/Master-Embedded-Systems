#include "stdio.h"

int main(void)
{
int num ;
    printf("Enter an int to check :");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);

    (num%2==0)?printf("%d is even",num):printf("%d is odd",num);
    return 0;
}
