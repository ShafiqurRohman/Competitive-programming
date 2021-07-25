#include<stdio.h>
int main()
{
    int i,a,b,c,count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {   scanf("%d",&c);
        if(c<=20&&c>=10)
         {

          count++;
          b=a-count;}
    }printf("%d in\n",count);
     printf("%d out\n",b);

   return 0;
}

