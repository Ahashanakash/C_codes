//write a programme that will show fibonacci numbers.
#include<stdio.h>
int main (){

    int n,fibo=0,first=0,second=1,i=0;
    printf("How many numbers = ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("%d",n);
    }
    else
    while (i<n)
    {
        fibo=first+second;
        printf("%d ",fibo);
        i++;
        first=second;
        second=fibo;
    }
    return 0;
}