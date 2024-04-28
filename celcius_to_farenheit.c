// write a programme that convert celcius to farenheit.

#include <stdio.h>
int main()
{

    double c, f;
    printf("Enter celcius = ");
    scanf("%lf", &c);

    f = c * (float)1.8 + 32;

    printf("Farenheit = %.3lf", f);

    return 0;
}