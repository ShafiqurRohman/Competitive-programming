#include<stdio.h>
int main()
{
    int a,b,sum=0,j,temp,i;
   for(;i;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<=0||b<=0)break;

           if(a>b){temp=a;a=b;b=temp;};


               for(j=a;j<=b;j++)
               {
                   printf("%d ",j);
                    sum=sum+j;
               }
           printf("sum=%d\n",sum);
           sum=0;


    }

    return 0;
}
