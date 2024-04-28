#include<stdio.h>
#include<string.h>
int main (){

    char s[]="akash",c[]="akash";
    int d;
    d=strcmp(s,c);
    if (d==0)
    {
        printf("String is equal\n");
    }
    else
    printf("String is not equal\n");
    

    return 0; 
}