#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ar[15][15],k=0.0;
    char a;
    cin>>a;
    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
            cin>>ar[i][j];
    }

    for(int i=0; i<12; i++)
    {
        for(int j=1+i; j<11-i; j++)
            k=k+ar[i][j];
    }
    if(a=='S')
    {
        cout<<fixed<<setprecision(1)<<k<<endl;
    }
    else
        cout<<fixed<<setprecision(1)<<k/30.0<<endl;


    return 0;
}



