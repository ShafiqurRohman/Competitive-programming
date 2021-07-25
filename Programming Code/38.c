#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==1)
    {
        double c=b*4.00;
        printf("Total: R$ %.2lf\n",c);
    }
    else if(a==2)
    {

        double d=b*4.50;
        printf("Total: R$ %.2lf\n",d);
    }
    else if(a==3)
    {
        double e=b*5.00;
        printf("Total: R$ %.2lf\n",e);
    }
    else if(a==4)
    {
        double f=b*2.00;
        printf("Total: R$ %.2lf\n",f);
    }
    else if(a==5)
    {

        double g=b*1.50;
        printf("Total: R$ %.2lf\n",g);
    }
    return 0;
}
