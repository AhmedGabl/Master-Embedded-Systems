#include "stdio.h"

int main(void)
{

    int i;
    printf("Enter an integer:");
    fflush(stdin);fflush(stdout);
    scanf("%d",&i);
    printf("you Entered :%d",i);
    return 0;
}
