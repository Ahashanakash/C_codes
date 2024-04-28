//write a programme that will take numbers and print the maximum
/*
#include<stdio.h>
int main (){

    int n[1000],a,i,max;

    printf("How many numbers ?\n");
    scanf("%d",&a);

    printf("Enter numbers = ");
    for ( i = 0; i < a; i++)
    {
        scanf("%d",&n[i]);
    }
    max=n[0];
    for ( i = 1; i <a; i++)
    {
        if (max<n[i])
        {
            max=n[i];
        }
        
    }
    printf("Maximum is %d\n",max);
    

    return 0;
}
*/


//write a programme that will take numbers and print the minimum
#include<stdio.h>
int main (){

    int n[1000],a,i,min;

    printf("How many numbers ?\n");
    scanf("%d",&a);

    printf("Enter numbers = ");
    for ( i = 0; i < a; i++)
    {
        scanf("%d",&n[i]);
    }
    min=n[0];
    for ( i = 1; i >a; i++)
    {
        if (min<n[i])
        {
            min=n[i];
        }
        
    }
    printf("Minimum is %d\n",min);
    

    return 0;
}