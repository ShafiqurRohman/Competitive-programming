#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define ss           s.size()
#define sot(v)       sort(v.begin(),v.end())
#define all(v)       (v).begin(), (v).end()
#define rev(v)       reverse(v.begin(),v.end())
#define revsot(v)    sort(v.rbegin(),v.rend())
#define yes          cout<<"YES"<<endl
#define no           cout<<"NO"<<endl
#define ii           pair<int, int>
#define iib        pair<bool, bool>
#define int          long long
#define ll           long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 1e6+100;
const int inf = 1e18;
const int mod = 1e9+7;
using namespace std;

vector<int>prime;
bool isprime[mx];

void seive(){
    memset(isprime, true, sizeof(isprime));

    for(int i=4;i<=mx;i+=2)isprime[i]=false;

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

int segmentSeive(ll l, ll r){

    bool isprime[r-l+1];

    for(int i=0;i<r-l+1;i++) isprime[i] = 1;

    if(l==1) isprime[0] = 0;

    for(int i=0;prime[i]*prime[i]<=r;i++){

        int curprime = prime[i];
        int base = (l/curprime)*curprime;
        if(base<l)base+=curprime;

        for(int j=base; j<=r; j+=curprime){
            isprime[j-l]=0;
        }

        if(base==curprime)isprime[base-l]=1;

   }
   int cnt = 0;
   vector<int> ans;
   for(int i=0;i<r-l+1;i++){
    if(isprime[i])ans.pb(i+l);
    }
    int len = ans.size();
    if(len == 0)return cnt;
    for(int i=0; i<ans.size()-1; i++){
        if(ans[i]+2 == ans[i+1])cnt++;
    }
    return cnt;
}
void solve(){
    int left, right;
    cin >> left >> right;
    cout << segmentSeive(left, right) << endl;
}

int32_t main(){
    Fast;
    seive();
    int tst;
//    cin>>tst;
//    for(int i=1; i<=tst; i++)
        solve();
    return Okay;
}
