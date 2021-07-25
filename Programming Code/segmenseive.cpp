#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define ll long long
#define pb push_back
#define Okay 0
using namespace std;
int const mx=10e6;

vector<int>prime;
bool isprime[mx];

void seive(){
    memset(isprime, true, sizeof(isprime));

    for(int i=4;i<=mx;i+=2)isprime[i]=false;//eita na korleo hai laron ami pore 3 the loop chalaisi and 2 kore increment korsi.

    for(int i=3; i*i <= mx ; i+=2){
        if(isprime[i]){
            for(int j=i*i ; j<mx ; j+=(i+i)){
                isprime[j]=false;
            }
        }
    }
    prime.pb(2);
    for(int i=3;i<mx;i+=2)
        if(isprime[i]==true)prime.pb(i);

}

void segmentSeive(ll l, ll r){

    bool isprime[r-l+1];

    for(int i=0;i<r-l+1;i++) isprime[i] = 1;

    if(l==1) isprime[0] = 0;

    for(int i=0;prime[i]*prime[i]<=r;i++){

        int curprime = prime[i];
        ll int base = (l/curprime)*curprime;
        if(base<l)base+=curprime;

        for(int j=base;j<=r;j+=curprime){
            isprime[j-l]=0;
        }

        if(base==curprime)isprime[base-l]=1;

   }

    for(int i=0;i<r-l+1;i++){
    if(isprime[i])cout<<i+l<<endl;

    }

}


int main(){
    ll int a,b,tst;
    seive();
    cin>>tst;
    while(tst--){
       cin>>a>>b;
        segmentSeive(a,b);
        }
    return Okay;
}
