#include <stdio.h>

void func(int arr[], int i)
{
    if (i == 5)
        return;
    printf("%d ", arr[i]);
    func(arr, i + 1);
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    func(arr, 0);

    return 0;
}