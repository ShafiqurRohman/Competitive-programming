#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=3.1416*radius*radius;
    printf("the area is the circle:%.2f",area);
    return 0;
}
