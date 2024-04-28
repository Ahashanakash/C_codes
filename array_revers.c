#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0,k=n-1;
    while (j<k)
    {
        int temp;
        temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
        j++;
        k--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
return 0;
}