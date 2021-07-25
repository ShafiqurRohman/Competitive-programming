#include <bits/stdc++.h>
using namespace std;
#define n 100000000
vector<bool> a(100000000,true);
long long int p[n],k=1,size;
long long int prime()
{
    long long i,j;
    a[0]=a[1]=false;
    for(i=4;i<=n;i=i+2)
    {
        a[i]=false;
    }
    for(i=3;i<=sqrt(n);i=i+2)
    {
        for(j=i*i;j<=n;j=j+2*i)
        {
            a[j]=false;
        }
    }
    p[0]=2;
    for(i=3;i<=n;i=i+2)
    {
        if(a[i]==true)
        {
            p[k]=i;

            k++;

        }
    }


}


int main()
{
    long long int t,u,l,w,z;

    prime();

    cin>>t;
    for(l=1;l<=t;l++)
    {
        cin>>u;
        cout<<p[u-1]<<endl;
    }

    return 0;
}
