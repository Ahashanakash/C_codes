//write a progrrame that search a numbers position.
#include<stdio.h>
int main (){
    int a,n[10000],i, position=-1,value,pos=-1;;
    printf("How many numbers ?\n");
    scanf("%d",&a);
    printf("Enter numbers = ");
    for ( i = 0; i < a; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("which number you want to find?\n");
    scanf("%d",&value);
    for ( i = 0; i < a; i++)
    {
        if (value==n[i])
        {
            pos=i+1;
            break;
        }
    }
    if (pos==-1)
    {
        printf("position not found.\n");
    }
    else
    printf("Look at position %d\n",pos);
    return 0;
}