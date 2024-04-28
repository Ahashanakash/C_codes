//1) Write a C pogroms that takes three numbers  and calculates sum and average of given numbers


#include <stdio.h>

int main() {
    float num1, num2, num3, sum, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    avg = sum / 3.0;
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);
    return 0;
}
