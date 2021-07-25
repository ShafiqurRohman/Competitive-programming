#include<stdio.h>
int main()
{
    int a,d,c,i,b;
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
    a=i;
    c=i*i;
    d=(i*i*i);
        printf("%d %d %d\n",a,c,d);
        printf("%d %d %d\n",a,(c+1),(d+1));
        }


    return 0;
}
