#include<bits/stdc++.h>
using namespace std;
long long int ulta(long long int n)
{
    long long int r;
    r=0;
    while(n!=0)
    {
        r=r*10+(n%10);
        n=n/10;
    }
    return r;
}
int main()
{
    long long int a, b,sum,c, num1, num2;
    while(scanf("%lld",&a)==1){
        for(int i=1;i<=a;i++)
        {
            scanf("%lld",&b);
            c=0;
            num2=b;
            num1=ulta(b);
            if(num1==num2)
              printf("0 %lld\n",num1);
            else
            {
                do
                {
                    sum=num1+num2;
                    num1=sum;
                    num2=ulta(sum);
                    c++;

                }while(num1!=num2);
                printf("%lld %lld\n",c,num1);
            }
        }
    }
    return 0;
}
