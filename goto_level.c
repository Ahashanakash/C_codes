//goto statement

#include<stdio.h>
int main(){

    int i=1,n;

    printf("Enter number = ");
    scanf("%d",&n);

    loop:
    printf("%d Bangladesh\n",i);
    i++;
    if (i<=n)
    
        goto loop;
    
    

    return 0;
}