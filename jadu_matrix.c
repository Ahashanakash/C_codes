#include <stdio.h>

int main() {
    int row,col;
    scanf("%d %d", &row, &col);
    if (row != col)
    {
        printf("NO");
        return 0;
    }
    
    int arr[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
        scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            if (i==j)
            {
                if (arr[i][j]!=1)
                {
                    count++;
                    break;
                } 
            }
            else if ((i+j)==(row-1))
            {
                if (arr[i][j]!=1)
                {
                    count++;
                    break;
                }
            }
            else if (arr[i][j]!=0)
            {
                count++;
                break;
            }
        }
        if (count)
        {
            break;
        }
        }
    
    if (count) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
