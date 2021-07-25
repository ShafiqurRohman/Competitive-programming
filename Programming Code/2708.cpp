#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b,sum1=0,c=0,d=0,sum2=0;
    while(cin>>a&& a!="ABEND")
    {

            cin>>b;
            if(a=="SALIDA")
            {
                sum1=sum1+b;
                ++c;
               // cout<<a<<" "<<sum1<<endl;
            }
            else
            {
                sum2=sum2+b;
                //cout<<b<<" "<<sum2<<endl;
                ++d;
            }
    }
    cout<<abs(sum1-sum2)<<endl<<abs(c-d)<<endl;
    return 0;
}


