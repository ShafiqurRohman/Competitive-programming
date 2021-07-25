#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&c,&b,&d);

    if(a>b)
    {


        if(c>d&&((a-b)==1))
        {
            int t=(60-c)+d;
            int x=(24-a)+b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,t);
        }
        else if(c>d&&((a-b)>1))
        {
            int t=(24-a)+b;
            int t2=(60-c)+d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,t2);
        }

        else if(d>c)
        {
            int t=a-b;
            int t2=d-c;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,t2);
        }
        else if(c==d)
        {
            int t=(24-a)+b;
            int x=c-d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,x);
        }
    }
    else if(a==b)
    {
        if(c>d)
        {
            int t=(24-a)+b;
            int t2=(60-c)+d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,t2);
        }
        else if(d>c)
        {
            int t=d-c;
            int x=a-b;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,t);
        }
        else if(c=d)
        {

            int x=(24-a)+b;
            int y=c-d;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
        }
    }
        else if(b>a)
        {
            if(c>d&&((b-a)==1))
            {
                int t=(60-c)+d;
                int x=b-a;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,t);
            }
            else if(c>d&&((b-a)>1))
            {
                int t=(24-b)+a;
                int t2=(60-c)+d;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,t2);
            }

            else if(d>c)
            {
                int t=b-a;
                int t2=d-c;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,t2);
            }
            else if(c==d)
            {
                int t=b-a;
                int x=c-d;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",t,x);
            }

        }


        return 0;
    }
