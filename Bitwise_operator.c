//Bitwise operator

#include<stdio.h>

int main(){

    int a,b,c,d,e;

    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);

    c=a&b;
    d=a|b;
    e=a^b;
    printf("Bitwise (AND)& = %d\n",c);
    printf("Bitwise (OR)| = %d\n",d);
    printf("Bitwise XOR(^) = %d\n",e);

    return 0;
}