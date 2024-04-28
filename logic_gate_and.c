//write a programme that will read 3 numbers and print the large number mong them.

#include <stdio.h>

int main() {
   
   int a,b,c;

   printf("Enter 3 numbers = ");
   scanf("%d %d %d",&a,&b,&c);

   if (a>b && a>c)
   {
    printf("large number is %d\n",a);
   }
   if (b>a && b>c)
   {
    printf("large number is %d",b);
   }
   if (c>a && c>b)
   {
    printf("large number is %d",c);
   }
   
    return 0;
}