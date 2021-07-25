#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ar[15][15],k=0.0;
    int a;
    char b;
    cin>>a>>b;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>ar[i][j];
            }
    }
        for(int j=0;j<12;j++){
     k+=ar[a][j];}

    if(b=='S'){cout<<fixed<<setprecision(1)<<k<<endl;}
    else
        cout<<fixed<<setprecision(1)<<k/12.0<<endl;


    return 0;
}
