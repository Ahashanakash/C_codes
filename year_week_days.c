//6) Write a program that converts specified days into year, weak and days


#include <stdio.h>

int main() {
    int days, years, weeks, rd;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    rd = (days % 365) % 7;
    printf("%d days = %d year(s), %d week(s), and %d day(s).\n", days, years, weeks, rd);
    return 0;
}
