//write a progrrame that calculate sum of two matrix
#include<stdio.h>
int main (){

    int a[10][10],b[10][10],i,j,nor,noc,c[10][10];

    printf("Enter row and column \n");
    scanf("%d %d",&nor,&noc);

    printf("\nA =  \n");
    
    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("\n\nB =  \n");
    
    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }

    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }        
    }
    printf("\n\nC = \n");

    for ( i = 0; i < nor; i++)
    {
        for ( j = 0; j < noc; j++)
        {
           printf("%d ",c[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}