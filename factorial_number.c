//write a programme that calculate factorial number.

#include<stdio.h>
int main(){

    int n,i,f=1;
    printf("Enter number for factorial = ");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        f=f*i;
    }
    printf("%d! = %d\n",n,f);
    

    return 0;
}