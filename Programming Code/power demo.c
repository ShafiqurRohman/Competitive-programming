#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    printf("enter the base value:");
    scanf("%d",&x);
    printf("enter the power value:");
    scanf("%d",&y);
    double result=pow(x,y);
    printf("the power result is=%.2d",result);
    return 0;
}
