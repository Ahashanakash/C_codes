#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main (){

    struct person person[2];
    int i;

    for ( i = 0; i < 2; i++)
    {
        printf("Enter person%d info : \n",i+1);
        printf("Enter age : \n");
        scanf("%d",&person[i].age);
        printf("Enter salary : \n");
        scanf("%f",&person[i].salary);
    }
    
    for ( i = 0; i < 2; i++)
    {
        printf("Person%d information : \n",i+1);
        printf("Age %d : \n",person[i].age);
        printf("Salary %f : \n",person[i].salary);

    }

    return 0;
}