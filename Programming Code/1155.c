#include<stdio.h>
int main()
{
    int i;
    float s=0.0,j=1.0;
    for(i=1;i<=100;i++)
    {
        s=s+(j/i);
    }printf("%.2f\n",s);
    return 0;
}