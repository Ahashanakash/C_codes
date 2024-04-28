//write a programme that will calculate prime number.
#include<stdio.h>
int main(){

    int n,i,p=0;
    printf("Enter number = ");
    scanf("%d",&n);

    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
           p++;
           break;
            
        }  
    }
     if (p==0)
        {
            printf("Prime number \n");
            
        }
        else
        {
            printf("Not prime number \n");
        }
    return 0;
}