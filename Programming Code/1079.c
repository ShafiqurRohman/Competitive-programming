#include<stdio.h>
int main()
{
    int i,a;
    double b,c,d,f;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%lf %lf %lf",&b,&c,&d);
        b=b*2.00;
        //printf("%.2lf ",b);
        c=c*3.00;
        //printf("%.2lf ",c);
        d=d*5.00;
        //printf("%.2lf ",d);
        f=(b+c+d)/10.00;
        printf("%.1lf",f);
    }
    return 0;
}
