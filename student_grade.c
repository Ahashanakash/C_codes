//write a programme that will read any students number and print the grade.
#include<stdio.h>
int main (){

    double n;

    printf("Enter students number ");
    scanf("%lf",&n);

    if (n>100)
    {
        printf("Invalid ");
    }
    else if (n>=80)
    {
        printf("A+");
    }
    else if (n>=70)
    {
        printf("A");
    }
    else if (n>=60)
    {
        printf("A-");
    }
    else if (n>=50)
    {
        printf("B");
    }
    else if (n>=40)
    {
        printf("C");
    }
    else if (n>=33)
    {
        printf("D");
    }
    else if (n>=0)
    {
        printf("F");
    }
    else
    {
        printf("Invalid number \n");
    }


    return 0;
}