////write a programme that will read a character and print if it is vowel or consonant.

#include <stdio.h>

int main() {
   
   char c;
   printf("Enter a letter ");
   scanf("%c",&c);

    if (c=='a' || c=='e'|| c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("Vowel\n");

    }
    else {

        printf("Consonant \n");
    }
    
   
    return 0;
}