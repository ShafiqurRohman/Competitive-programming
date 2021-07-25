#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1; i<=9; i+=2)
    {
        j=7;
        k=6;
        l=5;
        printf("I=%d J=%d\n",i,j);
        printf("I=%d J=%d\n",i,k);
        printf("I=%d J=%d\n",i,l);
    }
    return 0;
}
