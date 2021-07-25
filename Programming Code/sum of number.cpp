#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,r,sum=0;
    cin>>a;
    while(a!=0){
     r=a%10;
     sum=sum+r;
     a=a/10;

    }cout<<sum<<endl;
    return 0;
}

