#include "stdio.h"
#include "stdlib.h"
#include "math.h"

char IS_Prime(int i){
    if (i<=1)return 0;

    for (int j = 2; j <=sqrt(i); j++)
        if (i%j == 0) return 0;
    return 1;
}
int main(void)
{
   int n1,n2;
    printf("Enter two numbers:");
    fflush(stdin);fflush(stdout);
    scanf("%d", &n1);
    scanf("%d",&n2);

    printf("Prime numbers between %d abd %d are : ", n1,n2);
   for (int i = n1; i < n2; i++)
    if (IS_Prime(i))
        printf("%d ",i);
   
    return 0;
}