#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void reverseSentence() {
    char c;
    scanf("%c", &c);
    
    if (c == '\n') return;
    reverseSentence();
    
    if (c != '\n')    printf("%c", c);
}

int main() {

    printf("Enter a sentence:");
    reverseSentence();
    return 0;
}
