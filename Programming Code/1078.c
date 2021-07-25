#include<stdio.h>
int main()
{
    int a,i,p;
    scanf("%d",&a);
    if(a<1000)
    {
       for(i=1;i<=10;i++)
       {
        p=i*a;
        printf("%d x %d = %d\n",i,a,p);}
    }
    return 0;
}

