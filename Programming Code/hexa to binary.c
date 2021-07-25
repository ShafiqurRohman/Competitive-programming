#include<stdio.h>
int main()
{
    float base,height,area;
    printf("enter the base:");
    scanf("%f",&base);
    printf("enter the height:");
    scanf("%f",&height);
    area=0.5*(base*height);
    printf("the area is:%.2f",area);
    return 0;
}
