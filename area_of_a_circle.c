//wite a programme that will calculate the area of a circle using pie function.
#include<stdio.h>
#include<math.h>
int main (){

    double r,area;

    printf("Enter the radius = ");
    scanf("%lf",&r);

    area=M_PI*r*r;

    printf("Area of the circle is = %.3lf\n",area);

}