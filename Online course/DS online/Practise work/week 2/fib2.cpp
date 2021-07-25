#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs            v.size()
#define ss             s.size()
#define be            v.begin(),v.end()
#define pii             pair<int,int>
#define ll               long long
#define ull             unsigned long long
#define pb             push_back
#define mpp          make_pair
#define Okay        0
const int m = 900+10e7;
static ll int inf = 1e18;
using namespace std;

ll a,b,c,d,n,k;
int dp[m];

ll int solve(int n){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = (dp[i-1]+dp[i-2])%10;
    }
        return dp[n];
}

int main() {
    Fast;

    memset(dp,-1,sizeof dp);
    cin>>n;
    cout<<solve(n)<<endl;

    return Okay ;
}

