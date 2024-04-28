//write a programme that read a number and print if it is even or odd.

#include<stdio.h>
int main (){

    int n;

    printf("Enter any number = ");
    scanf("%d",&n);

    if (n%2==0)
    {
        printf("Even number ");
    }
    else
    {
        printf("Odd number");
    }
    

    return 0;
}