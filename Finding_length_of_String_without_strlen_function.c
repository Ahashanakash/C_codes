#include<stdio.h>
int main (){

    char s[]="Ahashan akash";
    int i=0, length=0;

    while (s[i]!='\0')  
    {
        length++;
        i++;
    }
    printf("length = %d",length);

    return 0;
}