//write a programme that will print a word or sentence many time as users wish.
#include<stdio.h>
int main (){

    int n,i=1;
    printf("Enter a number you wish = ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d Bangladesh \n",i);
        i++;
    }
    
    
    return 0;
}