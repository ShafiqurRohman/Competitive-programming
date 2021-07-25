#include<stdio.h>
int main()
{
    int a,i,p;
    scanf("%d",&a);
    if(a>5&&a<2000)
    {
    if(a%2==0)
    {
        for(i=2;i<=a;i=i+2)
        {
          p=pow(i,2);
          printf("%d^2 = %d\n",i,p);
        }
    }
    else
    {
        for(i=2;i<a;i=i+2)
        {
          p=pow(i,2);
          printf("%d^2 = %d\n",i,p);
        }
    }
    }
    return 0;
}
