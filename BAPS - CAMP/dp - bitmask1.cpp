#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define ss           s.size()
#define sot(v)       sort(v.begin(),v.end())
#define all          v.begin(), v.end()
#define rev(v)       reverse(v.begin(),v.end())
#define revsot(v)    sort(v.rbegin(),v.rend())
#define yes          cout<<"Yes"<<endl
#define no           cout<<"No"<<endl
#define ii           pair<int, int>
#define int          long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 2e5+100;
const int cont = 1e18;
const int mod = 1e9+7;
using namespace std;

int mem[1005][1<<10];
int n;
int  dp(int ind, int mask){
    if(__builtin_popcount(mask) == n)return 1;
    int &ret = mem[ind][mask];
    if(ret != -1)return ret;
    ret = 0;
    int low = 0;
    if(ind == 0)low = 1;
    for(int i=low; i<10; i++){
        if((mask&(1<<i)) == 0)
        ret += dp(ind+1, mask | (1<<i));
        ret %= mod;
    }
    return ret%mod;
}

void solve(){
   cin>>n;
   memset(mem, -1, sizeof mem);
   cout<<dp(0 , 0)<<endl;
}

int32_t main(){
    Fast;
    int tst;
    cin>>tst;
    while(tst--)
    solve();
    return Okay;
}

