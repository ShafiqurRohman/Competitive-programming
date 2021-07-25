#include<stdio.h>
int main()
{
    int i,a,b,count=0;
    scanf("%d %d",&a,&b);
    if(b>a){
    for(i=a+1;i<b;i++)
    {
        if(i%2!=0)
          count=count+i;
    }

    }
    else{
        for(i=b+1;i<a;i++)
    {
        if(i%2!=0)
          count=count+i;
    }
    }
    printf("%d\n",count);
    return 0;
}
