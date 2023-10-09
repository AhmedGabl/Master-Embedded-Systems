#include <stdio.h>

int sumNumbers(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n = 100;
    int result = sumNumbers(n);

    printf("Sum of numbers from 1 to %d is: %d\n", n, result);

    return 0;
}
