#include <stdio.h>

void solve(int n, char r1, char r3, char r2)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", r1, r3);
        return;
    }
    solve(n - 1, r1, r2, r3);
    printf("Move disk %d from rod %c to rod %c\n", n, r1, r3);
    solve(n - 1, r2, r3, r1);
}

int main()
{
    int n = 3;
    solve(n, 'A', 'C', 'B');
    return 0;
}
