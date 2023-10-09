#include <stdio.h>
#include <math.h>

double squareRoot(int num) {
    if (num < 0)
            return -1.0;
    return sqrt((double)num);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    double result = squareRoot(number);

    if (result < 0) {
        printf("Square root of a negative number is undefined.\n");
    } else {
        printf("Square root of %d is approximately %0.3f\n", number, result);
    }

    return 0;
}
