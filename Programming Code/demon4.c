#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Enter value of triangle: \n");
    scanf("%lf %lf %lf",&a,&b,&c);
    double s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle is =%.2lf\n",area);

    return 0;
}
