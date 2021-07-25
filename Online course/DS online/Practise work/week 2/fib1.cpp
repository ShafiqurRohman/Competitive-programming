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
const int m = 10+10e7;
static ll int inf = 1e18;
using namespace std;

ll a,b,c,d,n,k;
int dp[100];

ll int solve(int n){
    if(n <= 1)return n;
    if(dp[n] != -1)return dp[n];
    return dp[n] = solve(n-1)+solve(n-2);

}

int main() {
    Fast;

    memset(dp,-1,sizeof dp);
    cin>>n;
    cout<<solve(n)<<endl;

    return Okay ;
}
