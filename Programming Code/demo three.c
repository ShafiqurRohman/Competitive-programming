#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    a=max(x,y);
    a=max(a,z);
    c=min(x,y);
    c=min(c,z);
    if(a==x&&c==y)
        b=z;
    else if(a==y&&c==z)
        b=x;
    else
        b=y;
    printf("%d %d %d",a,b,c);
    return 0;
}
