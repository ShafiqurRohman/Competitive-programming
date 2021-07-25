#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast      ios_base::sync_with_stdio(false); cin.tie(0);
#define vs        v.size()
#define ss        s.size()
#define sot(v)    sort(v.begin(),v.end())
#define all       v.begin(), v.end()
#define rev(v)    reverse(v.begin(),v.end())
#define revsot(v) sort(v.rbegin(),v.rend())
#define yes       cout<<"Yes"<<endl
#define no        cout<<"No"<<endl
#define ii        pair<int, int>
#define int       long long
#define ull       unsigned long long
#define pb        push_back
#define mpp       make_pair
#define Okay      0
#define pi        3.14159

const int mx = 1e5+100;
const int cont = 1e18;
const int mod = 1e9+7;
using namespace std;

int n, sum;
int ar[25];
int mem[(1<<21)+5];

int dp(int length, int mask){
    if (length > sum / 4)return 0;
    if (length == sum / 4){
        if (__builtin_popcount(mask) == n)return 1;
        length = 0;
    }
    int &ret = mem[mask];
    if (ret != -1)return ret;
    for (int i = 1; i<=n; i++){
        if ((mask & 1 << i) == 0 && dp(length + ar[i], mask | 1 << i)){
            return ret = 1;
        }
    }
    return ret = 0;
}

void solve(){
    cin>>n;
    sum = 0;
    for(int i=1; i<=n; i++){
        cin>>ar[i];
        sum += ar[i];
    }
    if(sum%4 != 0){
        cout<<"no"<<endl;
        return;
    }
    memset(mem, -1, sizeof mem);
    if(dp(0, 0))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}

int32_t main(){
    Fast;
    int tst;
    cin>>tst;
    for(int i=1; i<=tst; i++)
    solve();
    return Okay;
}
