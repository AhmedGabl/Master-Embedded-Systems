#include "stdio.h"
#include "stdlib.h"

int CountDigits(int num){
static int num_new=0;
if (num!=0)
{   int rem=num%10;
    num_new+=rem;
    CountDigits(num/10);
}
return num_new;
}

int main(void)
{
    int num;
    printf("input:");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);
    printf("->output:%d",CountDigits(num));
    return 0;
}