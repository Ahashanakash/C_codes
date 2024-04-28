//write a programme that will calculate gcd and lcm.
#include <stdio.h>
int main()
{
    int n1,n2,gcd,num1,num2,rem;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);



    while (n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    printf("GCD is %d\n",gcd);
    
    return 0;
}
