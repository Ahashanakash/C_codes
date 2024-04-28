//4) Convenert the upper scale to lower scale  letter and vise versa

#include<stdio.h>
#include<ctype.h>
int main (){

    char a,b;

    printf("Enter any CAPITAL letter = ");
    scanf("%c",&a);

    b= tolower(a);

    printf("small letter is = %c",b);

    return 0;
}

//Convenert the lower scale to upper scale  letter 


/*#include<stdio.h>
int main (){

    char c;
    printf("Enter any small letter = ");
    scanf("%c",&c);

    printf("Capital letter is = %c",c-32);

    return 0 ;
}
*/
