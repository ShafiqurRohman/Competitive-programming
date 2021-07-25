#include<stdio.h>
int main()
{
int a,b=1,c=2,d=3,l;
    scanf("%d",&a);
    for(l=1;l<=a;l++){
            printf("%d %d %d PUM\n",b,c,d);

        b=b+4;
        c=c+4;
        d=d+4;
    }

return 0;
}

