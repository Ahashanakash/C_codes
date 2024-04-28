#include<stdio.h>
int main(){
    //taking array size
    int n;
    scanf("%d",&n);
    //taking array elements
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //taking position and value
    int pos,value;
    scanf("%d %d",&pos,&value);
    for (int i = n; i >=pos; i--)
    {
        arr[i]=arr[i-1];
    }
    //puting value in position
    arr[pos-1]=value;
    //printing all the array element
    for (int i = 0; i <=n; i++)
    {
        printf("%d ",arr[i]);
    }
    
return 0;
}