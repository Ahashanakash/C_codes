//write a programme that shows Strong number.

#include<stdio.h>
int main ()
{

    int n,fact,i,sum=0,num,r;

        printf("Enter number ");
        scanf("%d",&n);
        num=n;

        while (n!=0)
        {
            r=n%10;
            fact=1;
            for ( i = 1; i <=r; i++)
            {
                fact=fact*i;
            }
            sum=sum+fact;
            n=n/10;
        }
        
    if (sum==num)
    {
        printf("Strong number\n");
    }

    else
    printf("Not strong number\n");
    return 0;
}