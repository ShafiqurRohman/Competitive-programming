#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(b>c))
        i=a;
    if((b>c)&&(c>a))
        i=b;
    else
        i=c;
    if((a>!b)&&(b>!c))
        k=a;
    if((b>!c)&&(c>!a))
        k=b;
    if((c>!a)&&(a>!b))
        k=c;

    if((a>b)&&(b<c))
        j=a;
    if((b>c)&&(c>a))
        j=b;
    else
        j=c;



    printf("%d %d %d\n",i,j,k);
    return 0;
}
