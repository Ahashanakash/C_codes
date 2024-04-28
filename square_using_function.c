#include <stdio.h>

float sq(float n) {
    return n * n;
}

int main() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    float result = sq(n);
    printf("The square of %.4f is %.4f\n", n, result);
    return 0;
}