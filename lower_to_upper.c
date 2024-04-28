//write a programme that will convert any capital letter to small letter using library function.

#include<stdio.h>
int main (){

    char a,b;

    printf("Enter any small letter = ");
    scanf("%c",&a);

    b= toupper(a);

    printf("CAPITAL letter is = %c",b);

    return 0;
}