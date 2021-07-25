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

int m, mem[(1<<10)+10][1005];
string s;

int  dp(int mask, int m){
    int ind = __builtin_popcount(mask);
    if(ind == ss)return (m==0);
    int &ret = mem[mask][m];
    if(ret != -1)return ret;
    ret = 0;
    for(int i=0; i<ss; i++){
        if(((1<<i) & mask))continue;
        ret += dp(mask|(1<<i), (m*10 + s[ind] - '0')%m);
    }
    return ret;
}

void solve(){
   cin>>s>>m;
   memset(mem, -1, sizeof mem);
   cout<<dp(0 , m)<<endl;
}

int32_t main(){
    Fast;
    int tst;
    solve();
    return Okay;
}
