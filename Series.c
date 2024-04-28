//1+2+3+4+5+.........n=?

#include<stdio.h>
int main ()
{

    int n,i,result=0;

    printf("Enter number ");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
       result=result+i;
    }
    printf("1+2+3+....+%d = %d",n,result);
    
    return 0;
    }