//pattern 1
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
// return 0;
// }

//pattern 2
// #include<stdio.h>
// int main(){
//     int n,j,k;
//     scanf("%d",&n);
//     int s=1;
//     int m=(n*2)-1;
//     for (int i = 1; i <= n; i++)
//     {
//         for ( j = 1; j <s; j++)
//         {
//             printf(" ");
//         }
//         for ( k = m; k >= 1; k--)
//         {
//             printf("*");
//         }
//         s++;
//         m-=2;
//         printf("\n");
//     }
    
// return 0;
// }

//pattern 3
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// return 0;
// }

// pattern 4
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i = n; i >=1; i--)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
    
// return 0;
// }

// diamond shape pattern
#include<stdio.h>
int main(){
    int n,s,k=1;
    scanf("%d",&n);
    s=n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < s; j++)
        {
            printf("  ");
        }
        for (int l = 1; l <= k; l++)
        {
            printf("* ");
        }
        s--;
        k+=2;
        printf("\n");
        
    }
    s++;
    k-=4;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <=s; j++)
        {
            printf("  ");
        }
        for (int l = 1; l <= k; l++)
        {
            printf("* ");
        }
        s++;
        k-=2;
        printf("\n");
        
    }
    
return 0;
}