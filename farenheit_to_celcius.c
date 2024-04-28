//write a programme that can convert farenheit to celcius.
#include<stdio.h>
int main (){

    double f,c;
    printf("enter farenheit = ");
    scanf("%lf",&f);

    c= (f-32)*(double)5/9;
    printf("celcius is = %.2lf",c);

    return 0;
}