#include "stdio.h"

int main(void)
{

    float i,j;
    printf("Enter an integer:");
    fflush(stdin);fflush(stdout);
    scanf("%f %f",&i,&j);
    printf("you Entered :%f",i+j);
    return 0;
}
