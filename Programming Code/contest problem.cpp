#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 1e7+100;

vector<int>v;
bool prime[mx];

void seive(){
    for(int i=2; i<mx; i++){
        if(prime[i] == false){
            v.push_back(i);
            for(int j = i+i; j<mx; j+=i){
                prime[j] = true;
            }
        }
    }
}
vector <ii> c;
vector <ll> ans;
vector <ll> cha;
void segmented_sieve(){
    ll n=1000007;
    ll lim = sqrt(n)+7;
    v.push_back(2);
    for(int i=4; i<=n; i+=2)mark[i] = 1;
    for(ll i=3; i<=n; i+=2){
        if(!mark[i]){
            v.push_back(i);
            if(i<=lim){
                for(ll j=i*i; j<=n; j+=i){
                    mark[j]=1;
                    ///cout<<j<<" "<<mark[j]<<endl;
                }
            }
        }
    }
}

ll di(ll x){
    if(x==1)return 1;
    if(!mark[x]){
        ///cout<<x<<endl;
        return 2;
    }
    ll ans=1;
    for(int i=0; v[i]*v[i]<=x; i++){
        bool flag = false;
        ll cnt=0;
        while(x%v[i]==0 && x>1){
            flag=true;
            x = x/v[i];
            ++cnt;
        }
        ///cout<<"test "<<cnt<<endl;
        if(flag)ans = ans*(cnt+1);
        if(x==1)return ans;
    }
    if(x>1)ans = ans*2;
    return ans;

}

int main()
{

    return 0;
}
