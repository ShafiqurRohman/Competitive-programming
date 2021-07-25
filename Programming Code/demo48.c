#include<stdio.h>
int mian()
{
    double a;
    char p='%';
    scanf("%lf",&a);
    if(a>0.00&&a<=400.00)
    {
        double b=((a*15)/100);
        double c=a+b;
        printf("Novo salario: .2lf\n",c);
        printf("Reajuste ganho: .2lf\n",b);
        printf("Em percentual: 15 %c\n",p);

    }
   else if(a>400.00&&a<=800.00)
    {
        double b=((a*12)/100);
        double c=a+b;
        printf("Novo salario: .2lf\n",c);
        printf("Reajuste ganho: .2lf\n",b);
        printf("Em percentual: 12 %c\n",p);

    }
   else if(a>800.00&&a<=1200.00)
    {
        double b=((a*10)/100);
        double c=a+b;
        printf("Novo salario: .2lf\n",c);
        printf("Reajuste ganho: .2lf\n",b);
        printf("Em percentual: 10 %c\n",p);

    }
   else if(a>1200.00&&a<=2000.00)
    {
        double b=((a*7)/100);
        double c=a+b;
        printf("Novo salario: .2lf\n",c);
        printf("Reajuste ganho: .2lf\n",b);
        printf("Em percentual: 7 %c\n",p);

    }
   else if(a>2000.00)
    {
        double b=((a*4)/100);
        double c=a+b;
        printf("Novo salario: .2lf\n",c);
        printf("Reajuste ganho: .2lf\n",b);
        printf("Em percentual: 4 %c\n",p);

    }
    return 0;
}
