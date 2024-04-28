#include<stdio.h>

void print(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main(){
    int arr[3]={1,2,3};
    int size=sizeof(arr)/sizeof(int);

    print(arr,size);
    
return 0;
}