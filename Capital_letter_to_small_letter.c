//write a programme that will convert any capital letter to small letter without using library function.

#include<stdio.h>

int main (){

    char c;

    printf("Enter any CAPITAL letter = ");
    scanf("%c",&c);

    printf("samll letter is = %c",c+32);

    return 0;
}