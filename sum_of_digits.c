//write a programme that will read a number and calculate the sum of the number of digits.

#include<stdio.h>
int main (){

    int n,sum=0,r;
    printf("Enter number ");
    scanf("%d",&n);

    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of digits = %d",sum);

    return 0;
}