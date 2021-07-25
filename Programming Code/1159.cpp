#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,p=0;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)break;
        if(a%2==0)
        {
            for(int j=1; j<=5; j++)
            {
                p+=a;
                a+=2;
            }
            printf("%d\n",p);p=0;
        }
         else
        {a++;
            for(int j=1; j<=5; j++)
            {
                p=p+a;
                a=a+2;
            }
            printf("%d\n", p);p=0;
        }

    }

}


