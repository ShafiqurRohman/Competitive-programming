#include<stdio.h>
#define PI 3.14159
int main(){
    double A;
    double R;

    scanf("%lf",&R);

    A = PI*R*R;

    printf("Area of circle=%.4lf\n",A);
    return 0;
}
