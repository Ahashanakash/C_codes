#include<stdio.h>
#include<string.h>
int main () {

    char s[]="madam",c[500];

    strcpy(c,s);
    strrev(c);

    int d;
    d=strcmp(c,s);
   
    if (d==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }

    return 0;
}