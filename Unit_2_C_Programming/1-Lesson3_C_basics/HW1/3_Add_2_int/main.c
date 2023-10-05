#include "stdio.h"

int main(void)
{

    int i,j;
    printf("Enter an integer:");
    fflush(stdin);fflush(stdout);
    scanf("%d %d",&i,&j);
    printf("you Entered :%d",i+j);
    return 0;
}
