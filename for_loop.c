//write a programme that will print a word or sentence many time as users wish.

#include<stdio.h>
int main(){

    int n,i;
    printf("Enter a number you wish = ");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        printf(" Bnagladesh %d\n",i);
        
    }
    

    return 0;
}