#include<stdio.h>
int main()
{
    double i,j=1,k=2,l=3;
    for(i=0; i<=2; i=i+0.2)
    {   j=j+i;
        k=k+i;
        l=l+i;

        printf("I=%.1lf J=%.1lf\n",i,j);
        printf("I=%.1lf J=%.1lf\n",i,k);
        printf("I=%.1lf J=%.1lf\n",i,l);

    }
    return 0;
}

