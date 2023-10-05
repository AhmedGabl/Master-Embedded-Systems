#include "stdio.h"

int main(void)
{

    char str;

    printf("Enter a char:");
    fflush(stdin);fflush(stdout);
    scanf("%c",&str);
    printf("ASCI value :%d",str);
    return 0;
}
