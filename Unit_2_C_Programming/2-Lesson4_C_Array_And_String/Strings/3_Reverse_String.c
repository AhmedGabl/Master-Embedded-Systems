#include "stdio.h"
#include "stdlib.h"
#include "string.h"
int main(void)
{
    char c;
    char* str_t=  (char*)malloc(100*sizeof(char));
    printf("Enter the string:");
    fflush(stdin);fflush(stdout);
    gets(str_t);
    realloc(str_t,sizeof(char)*(strlen(str_t)));

    int  len=strlen(str_t);

    for (int i = 0; i < strlen(str_t)/2; i++)
    {
        c=str_t[i];
        str_t[i]=str_t[len-1-i];
        str_t[len-i-1]=c;
    }
    printf("reverse string is: %s",str_t);
    free(str_t);
    return 0;
}