#include<bits/stdc++.h>
//#include<string.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    string i,j;
    scanf("%s %d",&i,&d);
    scanf("%d %d %d",&a,&b,&c);
    scanf("%s %d",&j,&h);
    scanf("%d %d %d",&e,&f,&g);

    int p1=(d*3600*24)+(a*3600)+(b*60)+c;
    int p2=(h*3600*24)+(e*3600)+(f*60)+g;
    if(p2>p1)
    {
        int x=p1-p2;
        int day=x/(3600*24);
        x=x%(3600*24);
        int h=x/3600;
        x=x%3600;
        int m=x/60;
        x=x%60;
        int s=x;
        printf("%d dia(s)\n",day);
        printf("%d hora(s)\n",h);
        printf("%d minuto(s)\n",m);
        printf("%d segundo(s)\n",s);



    }
    else{int x=(30*24*3600)+(p1-p2);
        int day=x/(3600*24);
        x=x%(3600*24);
        int h=x/3600;
        x=x%3600;
        int m=x/60;
        x=x%60;
        int s=x;
        printf("%d dia(s)\n",day);
        printf("%d hora(s)\n",h);
        printf("%d minuto(s)\n",m);
        printf("%d segundo(s)\n",s);


    }
    return 0;
}
