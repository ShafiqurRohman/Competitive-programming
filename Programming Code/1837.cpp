#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,q,r,tem;
    cin>>a>>b;
    if(a>b){tem=a;a=b;b=tem;}
    q=a/b;
    r=a%b;
    if(r<0)
    {
        if(q>0)
            q++;
        if(q<0)
            q--;
        r=a-(q*b);
    }
    cout<<q<<" "<<r<<endl;

}
