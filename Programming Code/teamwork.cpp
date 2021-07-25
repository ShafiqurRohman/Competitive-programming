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
#define int          long long
#define ll           long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 1e3+100;
const int inf = 1e18;
const int mod = 1e9+7;
using namespace std;

int n, m;
char grid[1005][1005];
int mem[1005][1005];

bool isvalid(int i, int j, char ch){
    if(i>=0 and i<n and j>=0 and j<m and ch != '#')return true;
    return false;
}

int dp(int i, int j){
    if(i == n-1 and j == m-1)return 1;
    int &ret = mem[i][j];
    if(ret != -1)return ret;
    ret = 0;
    if(isvalid(i+1, j,grid[i][j])){
        ret+= dp(i+1, j);
        ret%=mod;
    }
    if(isvalid(i, j+1,grid[i][j])){
        ret+= dp(i, j+1);
        ret%=mod;
    }

    return ret;
}

void solve(){
   cout << "&#60";
}

int32_t main(){
    Fast;
    int tst;
//    cin>>tst;
//    while(tst--)
    solve();
    return Okay;
}
