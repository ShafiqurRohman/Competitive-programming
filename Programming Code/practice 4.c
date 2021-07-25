#include<stdio.h>
#define PI 3.14159
int main(){
   double a,b,c,x;


    scanf("%lf %lf %lf",&a,&b,&c);
    x=(a+b+c)/3.0;

    printf("Average of number=%.4lf\n",x);
    return 0;
}
