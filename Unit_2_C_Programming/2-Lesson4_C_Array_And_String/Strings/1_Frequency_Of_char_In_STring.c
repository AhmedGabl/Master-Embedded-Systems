#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void)
{
    char* str_t=  (char*)malloc(100*sizeof(char));
    char c;

    printf("Enter the string:");
    fflush(stdin);fflush(stdout);
    gets(str_t);
    realloc(str_t,sizeof(char)*(strlen(str_t)));

    printf("Enter the char to find frequency:");
    fflush(stdin);fflush(stdout);
    scanf("%c", &c);

    int i=0,freq=0;
    while (str_t[i]!='\0')
    {if (str_t[i]==c) freq++;
        i++;
    }
    printf("Frequency of %c = %d",c,freq);
    free(str_t);
    return 0;
}