#include<stdio.h>
int main()
{
    while(1)
    {
        printf("Enter a integer value:");
        int i,fact=1,n;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        printf("%d!=%d\n",n,fact);
    }
    return 0;

}
