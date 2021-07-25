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
static const int inf = 1e8;

int dp[400][10005];
int ar[400];
int w, n;

int solve(int i, int w){
    if(w < 0)return -inf;
    if(w == 0 || i == n)return 0;
    if(dp[i][w] != -1)return dp[i][w];
    return dp[i][w] = max(ar[i]+solve(i+1, w-ar[i]),solve(i+1, w));
}


int main(){
    Fast;
    memset(dp, -1, sizeof dp);
    cin>>w>>n;
    for(int i=0; i<n; i++)cin>>ar[i];
    cout<<solve(0, w)<<endl;

    return Okay ;
}

