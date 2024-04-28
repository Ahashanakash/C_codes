//write a programme that read a number and show that if it is positive or negetive.

#include <stdio.h>

int main() {
   
   int n;
   printf("Enter a number ");
   scanf("%d",&n);

   if (n>0)
   {
    printf("Positive");
   }
   else if (n<0)
   {
    printf("Negetive");
   }
   else
   {
    printf("Zero");
   }
   
    return 0;
}