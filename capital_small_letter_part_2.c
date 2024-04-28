//write a programme that will read a character and print if it is capital or small.

#include <stdio.h>

int main() {
   
   char c;
   printf("Enter an alphabet = ");
   scanf("%c",&c);

    if (c>='a' && c<='z')
    {
        printf("small letter \n");
    }
    else if (c>='A' && c<='Z')
    {
        printf("Capital letter \n");
    }
    else
    {
        printf("Not a letter \n");
    }
    
    
    return 0;
}