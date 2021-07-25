#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,c=0,n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        for(j=2; j<a; j++)
        {
            if(a%j==0)
                {c++;
                 break;}
        }
            if(c==0)
               {
                   printf("%d eh primo\n",a);}
            else{
                printf("%d nao eh primo\n",a);}

    }
    return 0;
}
