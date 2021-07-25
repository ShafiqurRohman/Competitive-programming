#include<stdio.h>
int main()
{
    double i,j,k=1;
    for(i=0; i<=2; i=i+0.2)
    {
        for(j=1;j<=3;j++){
            k=j;
            k=k+i;
        printf("I=%.1lf J=%.1lf\n",i,k);
            k=0;
        }

    }
    return 0;
}

