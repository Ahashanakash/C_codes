#include<stdio.h>
int main (){

    int a[6]={10,20,30,40,50,60};

    int i,*p1;

    p1=&a[0];
    for ( i = 0; i < 6; i++)
    {
        printf("%d\n",*p1);
        p1++;
    }
    


    return 0;
}