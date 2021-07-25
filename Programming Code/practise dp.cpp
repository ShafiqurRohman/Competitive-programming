#include<bits/stdc++.h>
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

    return 0;
}
