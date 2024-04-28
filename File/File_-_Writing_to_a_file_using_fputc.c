#include<stdio.h>
int main (){

    FILE *file;
    char a[500]="Ahashan kabir Akash ";
    int lenght =strlen(a),i;

    file = fopen("test2.text","a");
    if (file==NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened\n");
        for ( i = 0; i < lenght; i++)
        {
            fputc(a[i],file);
        }
        printf("File is written successfully.\n");
        fclose(file);
        
    }

    return 0;
}