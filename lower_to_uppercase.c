//Write a programme that will convert any small letter to CAPITAL letter without using library function.

#include<stdio.h>
int main (){

    char c;
    printf("Enter any small letter = ");
    scanf("%c",&c);

    printf("Capital letter is = %c",c-32);

    return 0 ;
}