#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,i;
    double a,b,f;
    cin>>c;
    for(i=1;i<=c;i++)
    {
        cin>>a>>b;
        if(b==0){cout<<"divisao impossivel"<<endl;}
        else{
            f=a/b;
            cout<<fixed<<setprecision(1)<<f<<endl;
        }

    }
    return 0;
}
