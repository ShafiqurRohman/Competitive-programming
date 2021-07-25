#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    printf("enter the sin value:");
    scanf("%lf",&x);
    result=sin(x);
    printf("the value of sin(%.1lf)=%lf",x,result);
}
