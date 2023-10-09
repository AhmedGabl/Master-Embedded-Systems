#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int reverseDigits(int num)
{
    static int temp = 0;
    if (num != 0)
    {
        temp = (temp * 10) + (num % 10);
        num /= 10;
        reverseDigits(num);
    }
    else return 0;
    return temp;
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("output : %d", reverseDigits(num));
    return 0;
}
