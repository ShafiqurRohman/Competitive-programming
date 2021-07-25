#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,temp,x,z,ans;
    cin>>a>>b>>c;
    if(a<b){temp=a;a=b;b=temp;}
    if(a%c==0){
        x=a/c;
    }
    else {
        x=(a/c)+1;
    }
    if(b%c==0){
        z=(b/c);
    }
    else{
        z=(b/c)+1;

    }
    ans=z*x;
    cout<<ans<<endl;
return 0;}
