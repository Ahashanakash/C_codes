//write a programme that will calculate LCM
#include<stdio.h>
int main (){

int n1,n2,num1,num2,rem,gcd,lcm;
    printf("Enter two numbers ");
    scanf("%d %d",&n1,&n2);
    num1=n1;
    num2=n2;

    while (n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    printf("GCD is %d\n",gcd);

    lcm=(num1*num2)/gcd;
    printf("lcm is %d\n",lcm);

    return 0;
}