//write a programme that will read two numbers and print the lagest one.
#include<stdio.h>
int main (){

    int a,b;

    printf("Enter two numbers = ");
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        printf("Larger number is %d\n",a);
    }
    else
    {
        printf("larger is %d\n",b);
    }

    return 0;
}