//8) Write a program that calculates the distance between two points

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", &x2, &y2);
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx*dx + dy*dy);
    printf("Distance between the two points is %lf\n", distance);
    return 0;
}