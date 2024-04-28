#include<stdio.h>

int func(char ch[],int i){
    if(ch[i]=='\0') return 0;
    int l=func(ch,i+1);
    return l+1;
}

int main(){
    char ch[6]="akash";
    int length=func(ch,0);
    printf("%d",length);
return 0;
}