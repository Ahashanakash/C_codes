#include<stdio.h>
#include<math.h>

double s (double a ,double x){
    return pow(a,x);
}

int main (){
    double b,p,r;
    printf("Enter base : ");
    scanf("%lf",&b);
    printf("Enter power : ");
    scanf("%lf",&p);
    r=s(b,p);
    printf("Answer : %.2lf\n",r);

}