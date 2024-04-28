//take some numbers and show summation, subtracion, multipication, division, remainder.

#include<stdio.h>
int main (){

    int a=10,b=6,sum, sub,mul,rem;
    double c=20,d=19,div;

    sum = a+b;
    printf("Sum of two numbers = %d\n",sum);

    sub = a-b;
    printf("Sub of two numbers = %d\n",sub);
    
    mul=a*b;
    printf("Mul of two numbers = %d\n",mul);

    div=c/d;
    printf("Div of two numbers = %lf\n",div);

    rem=a%b;
    printf("Rem of two numbers = %d",rem);





    return 0;
}