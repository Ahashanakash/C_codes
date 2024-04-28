//write a programme that will calculate power related math.

#include <stdio.h>

int main() {
   int x,y;
   double result;
   
   printf("enter number = ");
   scanf("%d",&x);
   printf("enter power = ");
   scanf("%d",&y);
   
    result = pow(x,y);
    printf("result = %.1lf\n",result);
    
    return 0;
}