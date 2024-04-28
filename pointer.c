#include<stdio.h>
int main (){

    int x=10,y=22,sum;
    int *p1,*p2;
    p1=&x;
    p2=&y;
    sum=*p1+*p2;

    printf("sum = %d",sum); //only sum will show the value
    //printf("sum = %u",&sum);   // &sum will show the address of sum

    return 0;
}