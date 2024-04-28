#include<stdio.h>
#include<string.h>

void print(char ch[]){
    for (int i = 0; i <strlen(ch) ; i++)
    {
        printf("%c",ch[i]);
    }
    
}

int main(){
    char ch[]="akash";
    print(ch);
return 0;
}