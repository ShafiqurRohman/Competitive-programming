#include<stdio.h>
int main()
{
    double x,y,z,result,mul;
    printf("enter the value of x:");
    scanf("%lf",&x);
    printf("enter the value of y:");
    scanf("%lf",&y);
    printf("enter the value of z:");
    scanf("%lf",&z);
    result=x+y+z;
    printf("the sum is:%.2lf\n",result);
    mul=x*y*z;
    printf("the multiple result is:%.2lf",mul);

}
