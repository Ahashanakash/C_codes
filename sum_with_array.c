//write a programme that read some numbers and display their sum and average.
#include<stdio.h>
int main (){
   int a,n[1000],sum=0,i,av;

   printf("How many numbers ?\n");
       scanf("%d",&a);
       printf("Enter numbers = ");

   for ( i = 0; i <a; i++)
   {
    scanf("%d",&n[i]);
   }

   for ( i = 0; i <a ; i++)
   {
    sum=sum+n[i];
   }

   printf("Sum is = %d\n",sum);
   printf("average is = %.2f\n",(float)sum/a);
   

    return 0;
}