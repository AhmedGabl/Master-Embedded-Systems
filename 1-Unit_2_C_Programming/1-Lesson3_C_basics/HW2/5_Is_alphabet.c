#include "stdio.h"

int main(void)
{
    char c;
    printf("Enter a char :");
    fflush(stdin);fflush(stdout);
    scanf("%c",&c);

if ((c>'a'&&c<'z')||(c>'A'&&c<'Z') )
    printf("%c is alphabet",c);
    else 
    printf("%c is a not alphabet",c);

    return 0;
}