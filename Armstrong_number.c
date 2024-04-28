//write a programme that shows armstrong number.
#include<stdio.h>
int main (){

    int n,sum=0,r,num;
    
    printf("Enter number ");
    scanf("%d",&n);
    num=n;

    while (n!=0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if (num==sum)
    {
        printf("Armstrong number.\n");
    }
    else
    printf("Not Armstrong.\n");

    return 0;
}
    