#include<stdio.h>

//using typedef for shortcut
typedef struct person
{
    char name[100];
    int age;
    float salary;
}ep ;

//print function 
void print(ep p){
    printf("\nName = %s",p.name);
    printf("Age = %d\n",p.age);
    printf("Salary = %f\n",p.salary);
}

//main function
int main(){
    ep person1,person2;
    printf("Enter name = ");
    //taking input for structure
    fgets(person1.name,sizeof(person1.name),stdin);
    printf("Enter age = ");
    scanf("%d",&person1.age);
    printf("Enter salary = ");
    scanf("%f",&person1.salary);
    //calling function
    print(person1);
return 0;
}