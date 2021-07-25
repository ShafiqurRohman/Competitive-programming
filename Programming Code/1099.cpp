#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
      int x=max(a,b);
      int y=min(a,b);
       for(int j=y+1;j<x;j++)
       {
           if(j%2!=0){
           k=k+j;}
       }cout<<k<<endl;k=0;
    }
    return 0;
}
