#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j=0;
    cin>>a>>b;
    if(a>b){
    for(i=b;i<=a;i++)
    {
        if(i%13!=0)
           j+=i;
    }cout<<j<<endl;}
    else{
    for(i=a;i<=b;i++)
    {
        if(i%13!=0)
           j+=i;
    }cout<<j<<endl;}
    return 0;
}
