#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    int b=a*100;
    int c=b/10000;
    b=b%10000;
    int d=b/5000;
    b=b%5000;
    int e=b/2000;
    b=b%2000;
    int f=b/1000;
    b=b%1000;
    int g=b/500;
    b=b%500;
    int h=b/200;
    b=b%200;
    int i=b/100;
    b=b%100;
    int j=b/50;
    b=b%50;
    int k=b/25;
    b=b%25;
    int l=b/10;
     b=b%10;
    int m=b/5;
     b=b%5;
    int n=b;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",c);
    printf("%d nota(s) de R$ 50.00\n",d);
    printf("%d nota(s) de R$ 20.00\n",e);
    printf("%d nota(s) de R$ 10.00\n",f);
    printf("%d nota(s) de R$ 5.00\n",g);
    printf("%d nota(s) de R$ 2.00\n",h);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",i);
    printf("%d moeda(s) de R$ 0.50\n",j);
    printf("%d moeda(s) de R$ 0.25\n",k);
    printf("%d moeda(s) de R$ 0.10\n",l);
    printf("%d moeda(s) de R$ 0.05\n",m);
    printf("%d moeda(s) de R$ 0.01\n",n);
    return 0;
}
