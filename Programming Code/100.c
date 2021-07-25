#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float x=(b*b)-(4*a*c);
    if(x<0)

    printf("Impossivel calcular\n");

    else if(a==0)

    printf("Impossivel calcular\n");
    else
    {
        float n=(-b+ sqrt(x))/(2*a);
        float m=(-b- sqrt(x))/(2*a);
        printf("R1 = %.5f\n",n);
        printf("R2 = %.5f\n",m);

    }

    return 0;
}
