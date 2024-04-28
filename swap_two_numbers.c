//write a program that will swap numbers
#include<stdio.h>
int main (){

    int a,b,temp;
    printf("write numbers = ");
    scanf("%d %d",&a,&b);

    temp=a;
    a=b;
    b=temp;
    printf("number swaped = %d %d\n",a,b);

    return 0 ;
}

/*write a program that will swap numbers without temp
#include<stdio.h>
int main (){

    int a,b,temp;
    printf("write numbers = ");
    scanf("%d %d",&a,&b);

    a=a-b;
    b=a+b;
    a=b-a;
    printf("number swaped = %d %d\n",a,b);

    return 0 ;
}
*/