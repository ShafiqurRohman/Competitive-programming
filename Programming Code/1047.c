#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>=c)
    {


            int h=24-abs(a-c);
            int m=60-abs(b-d);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if(a<=c)
    {
        int h=abs(a-c);
            int m=abs(b-d);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(a==c&&b==d)
    {
                  int t=24;
            int t2=0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,t2);

    }

       return 0;
}
