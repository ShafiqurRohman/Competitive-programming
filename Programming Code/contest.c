#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=(((float)1+c)/2)*c*a;
    int y=x-b;
    if(y<=0)
    {
      printf("0\n");
    }
    else
    {
         printf("%d\n",y);
    }


    return 0;
}
