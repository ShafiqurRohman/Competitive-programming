#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
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

int dp[10][5000];
int minCoins(int coins[], int m, int V, int coin){

    if (V == 0) return 0;
    if(dp[coin][V] != -1)return dp[coin][V];
    int res = INT_MAX;

    for (int i=0; i<m; i++) {
        int coin = coins[i];
        if (coins[i] <= V) {
        int sub_res = minCoins(coins, m, V-coins[i], coins[i]);
         res = min(res, sub_res+1);
        }
    dp[coin][V] = res;
   }
   return res;
}


int main(){
    int coins[] =  {1, 3, 4};
    int m = sizeof(coins)/sizeof(coins[0]);
    int V;
    cin>>V;
    memset(dp, -1, sizeof dp);
    cout << minCoins(coins, m, V,1)<<endl;

    return Okay;
}

