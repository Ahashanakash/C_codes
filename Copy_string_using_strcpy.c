#include<stdio.h>
int main (){

    char s[]="Ahashan akash", c[500];

   strcpy(c,s);
    printf("source = %s\n",s);
    printf("target = %s\n",c);
    return 0;
}