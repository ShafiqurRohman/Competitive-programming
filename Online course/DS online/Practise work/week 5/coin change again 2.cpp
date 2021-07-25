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

static ll int inf = 1e9;
const int m = 10e5+14;
using namespace std;

int ar[] = {1, 3, 4};
int dp[5][5000];

int  solve(int money, int coin){
    if(money == 0)return 0;
    if(dp[coin][money] != -1)return dp[coin][money];
    int res = m;
    for(int i =0; i<4; i++){
        if(ar[i] <= money){
            int sub_res = solve(money - ar[i], ar[i]);
            res = min(res, sub_res+1);
        }
        dp[coin][money] = res;
    }

    return res;

}


int main(){
    Fast;

    memset(dp, -1, sizeof dp);
    int n;
    cin>>n;
   cout<< solve(n,1)<<endl;

    return Okay ;
}

