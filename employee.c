/*
7)Write a program that accepts Anam employees ID, total worked hours in a month and the
 amount Wage she recieved per hour ( with two decimal places) of the employees
for a particular month 
*/

#include <stdio.h>

int main() {
    int eid, th;
    float wage;
    printf("Enter Employee ID: ");
    scanf("%d", &eid);
    printf("Enter total worked hours in a month: ");
    scanf("%d", &th);
    printf("Enter wage per hour : ");
    scanf("%f", &wage);
    float ms = th * wage;
    printf("Employee ID %d earned %.2f for the month.\n", eid, ms);
    return 0;
}
