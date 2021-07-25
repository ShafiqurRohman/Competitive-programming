#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;
    printf("enter the value of radius:");
    scanf("%f",&radius);
    area=M_PI*radius*radius;
    printf("the area is:%.2f",area);
    return 0;
}
