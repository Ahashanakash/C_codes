#include<stdio.h>
int main(){
    //taking size
    int n;
    scanf("%d",&n);
    //taking array element
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //taking position
    int pos;
    scanf("%d",&pos);
    //removing element by swaping
    for (int i = pos-1; i <n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    //printing array
    for (int i = 0; i <n-1; i++)
    {
        printf("%d ",arr[i]);
    }
    
return 0;
}