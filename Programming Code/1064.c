#include<stdio.h>
int main()
{
    int i,count=0;
    float a,b=0,c;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a);
        if(a>=0)
        {count++;
          b=b+a;}

        c=b/count;

        }
     printf("%d valores positivos\n",count);
        printf("%.1f\n",c);
    return 0;

}
