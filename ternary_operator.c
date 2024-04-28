//write a programme that will find the large number between two numbers using ternary operator

#include<stdio.h>
int main (){

    int a,b, large;
    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);

    large= (a>b) ? a : b;
    printf("Large number is %d",large);

    return 0;
}