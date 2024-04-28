// Menu based temperature convertion.

#include <stdio.h>

int main()
{

    int menu, tem, c, f, cel, far;
    printf("Press 1 to convert celcius to farenheit.\n");
    printf("Press 2 to convert farenheit to celcius.\n");
    printf("\n");
    printf("Enter your choice = ");

    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Enter celcius = ");
        scanf("%d", &c);
        far = c * (float)1.8 + 32;
        printf("farenheit is %d\n", far);
        break;

    case 2:
        printf("Enter farenheit = ");
        scanf("%d", &f);
        cel = (f - 32) * (float)0.55555;
        printf("celcius is %d\n", cel);
        break;

    default:
        printf("Invalid");
        break;
    }

    return 0;
}