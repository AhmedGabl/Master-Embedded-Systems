#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverseSentence(char *str){
    int len = strlen(str),Wstart = 0, Wend = 0;
    for (int i = 0; i < len / 2; i++)
        swap(str + i, str + len - 1 - i);

    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            Wend = i;
            for (int j = Wstart; j < (Wstart + (Wend - Wstart) / 2); j++)
                swap(str + j, str + Wend + Wstart - 1 - j);
            Wstart = i + 1;
        }
    }
}
int main()
{
    char str[] = "mohamed gamal";
    printf("input :%s \n", str);
    reverseSentence(str);
    printf("output:%s", str);
    return 0;
}
