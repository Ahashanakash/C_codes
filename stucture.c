#include<stdio.h>
#include<string.h>

//defining structure
struct person
{
    char name[100];
    int age;
    float salary;
};

int main (){
    //initializing structure variable
    struct person person1,person2;

    //initializing value
    strcpy(person1.name,"Akash");
    person1.age = 30;
    person1.salary = 1204420.125;
    
    strcpy(person2.name,"Batash");
    person2.age = 55;
    person2.salary = 7593735.473957;

    printf("Person1 : %s\n",person1.name);
    printf ("Age = %d\n",person1.age);
    printf ("Salary = %f\n\n",person1.salary);

    printf("Person2 : %s\n",person2.name);
    printf ("Age = %d\n",person2.age);
    printf ("Salary = %f\n",person2.salary);
    return 0;
}