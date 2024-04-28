//display string character wise
#include<stdio.h>
int main (){

    char s[50],i;
    printf("Enter name = ");
        gets(s);

    while (s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
    

    return 0;
}