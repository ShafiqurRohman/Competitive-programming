#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,p=0;
    scanf("%d",&c);
    for(int i=1; i<=c; i++)
    {
        scanf("%d %d",&a,&b);
        if(a%2!=0)
        {
            for(int j=1; j<=b; j++)
            {
                p+=a;
                a+=2;
            }
            printf("%d\n",p);
        }
         else
        {a++;
            for(int j=1; j<=b; j++)
            {
                p=p+a;
                a=a+2;
            }
            printf("%d\n", p);
        }

    }

}

