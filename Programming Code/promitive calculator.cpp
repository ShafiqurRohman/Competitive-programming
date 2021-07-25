#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define ss               s.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define ll                long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

using namespace std;
const int ll cont = 10e6;
static const ll inf = 1e11;

int dp[1000005][5];

int solve(int n, int mul){
    if(n <= 1)return 0;
    if(dp[n][mul] != -1)return dp[n][mul];
    int res = INT_MAX, sub_res;
    for(int i = 3; i>= 2; i--){
        if(n%i == 0)sub_res = solve(n/i, i);
        else sub_res = solve(n-1, 1);
        res = min(sub_res+1, res);
        dp[n][mul] = res;
    }
    return res;
}


int main(){
    Fast;
    int n;
    memset(dp, -1, sizeof dp);
    cin>>n;
    cout<<solve(n, 1)<<endl;

    return Okay ;
}

