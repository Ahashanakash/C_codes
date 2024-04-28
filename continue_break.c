//break and continue

#include<stdio.h>
int main(){

    int n,i;
    printf("Enter number = ");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        if (i%3==0)      
            continue;
            printf("%d\n",i);        
            if (i==10)          
            break;   
        }    
    return 0;
}