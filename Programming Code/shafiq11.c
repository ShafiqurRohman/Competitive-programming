#include<stdio.h>
int main()
{
    double x,a,b,c,d,e;
    scanf("%lf",&a);
    x=a/100;

    b=a/50;
    a=a%50;
    c=a/20;
    a=a%20;
    d=a/10;
    a=a%10;
    e=a/2;
    printf("NOTAS:\n");
    printf("%lf nota(s) de R$ 100.00\n",x);
    printf("%lf nota(s) de R$ 100.00\n",a);
    printf("%lf nota(s) de R$ 100.00\n",b);
    printf("%lf nota(s) de R$ 100.00\n",c);
    printf("%lf nota(s) de R$ 100.00\n",d);
    printf("%lf nota(s) de R$ 100.00\n",e);


        return 0;
}
