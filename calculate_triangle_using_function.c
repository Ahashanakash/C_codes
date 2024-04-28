#include<stdio.h>

float cal(float h,float b){
    return 0.5*h*b;
}

int main (){

    float h,b;
    printf("Enter height and base : ");
    scanf ("%f %f",&h,&b);

    float area = cal(h,b);

    printf("Area of Triangle is : %.2f\n",area);


}