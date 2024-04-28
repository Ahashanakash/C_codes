//write a programme that shows palindrom number.
#include<stdio.h>
int main (){

    int n,sum=0,r,num;
    
    printf("Enter number ");
    scanf("%d",&n);
    num =n;

    while ( n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if (num==sum)
    {
        printf("Palindrom number.\n");
    }
    else
    printf("Not Palindrom number.\n");

    return 0;
}