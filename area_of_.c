// 5) Write a program that calculates the parameters and area of a rectangle and circle

#include <stdio.h>
int main()
{

    double cir, rec, Width, Length, pc, pr, r, pi = 3.1416;
    printf("Enter radius = ");
    scanf("%lf", &r);
    printf("Enter Length and Width = ");
    scanf("%lf %lf", &Length, &Width);

    cir = pi * r * r;
    pc = 2.00 * pi * r;
    rec = Length * Width;
    pr = 2.00 * (Length + Width);
    printf("Area of the Circle is = %.2lf\n", cir);
    printf("Perimeter of the Circle is = %.2lf\n", pc);
    printf("Area of the Rectangle is = %.2lf\n", rec);
    printf("Perimeter of the Rectangle is = %.2lf\n", pr);

    return 0;
}