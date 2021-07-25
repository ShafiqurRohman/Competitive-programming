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

string s;
int mem[50][50];
int n;

int dp(int b, int e){
    if(b>=e){
        if(b==e)return s[b] - '0';
        else return 0;
    }
    int &ret = mem[b][e];
    if(ret != -1)return ret;
    ret = 0;
    for(int i=b+1; i<e; i++){
        if(s[i] >= 0 and s[i] <=9)continue;
        int val1 = dp(b, i-1);
        int val2 = dp(i+1, e);
        if(s[i] == '+')ret = max(ret , val1+val2);
        else if(s[i] == '*')ret = max(ret, val1*val2);
        else ret = max(ret, val1-val2);
    }
    return ret;
}

void solve(){
    cin>>s;
    memset(mem, -1, sizeof mem);
    cout<<dp(0, s.size()-1)<<endl;
}

int32_t main(){
    Fast;
    int tst;
    cin>>tst;
    while(tst--)
        solve();
    return Okay;
}
