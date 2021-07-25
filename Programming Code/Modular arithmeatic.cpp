#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll m;

ll f(ll b, ll p){

    if(p == 0){
        return 1;
    }
    if(p%2 == 0){
        ll ret = f(b,p/2);
        return ((ret%m)*(ret%m))%m;
    }
    else return ((b%m)*(f(b,p-1)%m))%m;
}

int main(){


    ll b,p;
   while(cin>>b>>p>>m){

       cout<<f(b,p)<<endl;
   }
    return 0;
}
