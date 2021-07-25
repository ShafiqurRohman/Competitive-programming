#include<stdio.h>
int main()
{

    int i,a,b=0,c=0,d=0,e=0;
    for(i=1; i<=5;i++)

    {
        scanf("%d",&a);

        if(a%2==0)b++;
        else c++;
        if(a>0)d++;
        if(a<0)e++;

                    }
    printf("%d valor(es) par(es)\n",b);
    printf("%d valor(es) impar(es)\n",c);
    printf("%d valor(es) positivo(s)\n",d);
    printf("%d valor(es) negativo(s)\n",e);
    return 0;

}

