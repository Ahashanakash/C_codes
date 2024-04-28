#include <stdio.h>
int main()
{
    // 1st array
    int n;
    scanf("%d", &n);
    // element input
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // 2nd array
    int m;
    scanf("%d", &m);
    // element input
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // 3rd array
    int arr3[n + m];
    // copying element form aray 1 and 2 to array 3
    int xy = 0;
    for (int i = 0; i < (n + m); i++)
    {
        if (i < n)
        {
            arr3[i] = arr[i];
        }
        else
        {
            arr3[i] = arr2[xy];
            xy++;
        }
    }
    // printing
    for (int i = 0; i < (n + m); i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}