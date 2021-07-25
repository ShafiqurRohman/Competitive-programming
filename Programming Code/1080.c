#include<stdio.h>
int main()
{
    int max=-1;
    int ind=-1,i,n;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&n);

            if(n>max)
            {
                max=n;
                ind=i;
            }

    }

    printf("%d\n%d\n",max,ind);


   return 0;
}
