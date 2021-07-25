#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int p1=a*60+b;
    int p2=c*60+d;
    if(p1>p2)
    {
        p2=24*60+p2;
        int h=(p2-p1)/60;
        int m=(p2-p1)%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else
    {
        int h=(p2-p1)/60;
        int m=(p2-p1)%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;
}
