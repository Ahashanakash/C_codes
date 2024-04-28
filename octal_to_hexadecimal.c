//write a programme that will convert any octal number to hexadecimal number.

#include<stdio.h>

int main (){

    int n;
    printf("Enter any octal number = ");
    scanf("%o",&n);

    printf("Hexadecimal number is %x",n);

    return 0;
}