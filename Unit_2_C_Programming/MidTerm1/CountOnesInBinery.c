#include "stdio.h"
#include "stdlib.h"

int countOnes(int num)
{
    int count=0 , temp=0;
    for (int i = 31; i >=0; i--)
    {
        temp= num>>i ;
        if (temp&1 == 1)count++;       
    }
return count;
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("output : %d", countOnes(num));
    return 0;
}
