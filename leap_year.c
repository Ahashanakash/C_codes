//write a programme that will read a year , calculate and print whether it is a leap year or not.


#include <stdio.h>

int main() {
   
   int y;
   printf("Enter a year = ");
   scanf("%d",&y);

   if (y%400==0 )
   {
    printf("Leap year ");
   }
   else if (y%4==0 && y%100!=0)
   {
    printf("Leap year");
   }
    else
    {
        printf("Not leap year");
    }
    
    return 0;
}