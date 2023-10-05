#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void)
{
    char* str_t=  (char*)malloc(100*sizeof(char));
    char c;

    printf("Enter a string :");
    fflush(stdin);fflush(stdout);
    gets(str_t);
//    realloc(str_t,sizeof(char)*(strlen(str_t)));

    int i=0;
    while (str_t[i]!='\0')i++;
    
    printf("Length of string = %d",i);
    free(str_t);
    return 0;
}