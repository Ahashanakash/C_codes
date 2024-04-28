//write a programme that shows Counting number of a digit in an integer

#include<stdio.h>
int main (){

    int n,count=0;
    
    printf("Enter number ");
    scanf("%d",&n);

    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Total number of the intiger is %d",count);

    return 0 ;
}
    