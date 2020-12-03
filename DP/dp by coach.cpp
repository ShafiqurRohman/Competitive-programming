#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define dbug printf("I am here\n");
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int maxn = 2e5+100;

const ll inf = 1e18;
const int m = 1e3+10;
int dp[m][m];
int mem[m][m] , ar[m];
int rt = 10 , n , k;

int solve(int i , int n){
    if(i == k or n == 0)return 0;
    int &ret = dp[i][n];

    if(mem[i][n] == rt)return ret;
    mem[i][n] = rt;

    if((n-ar[i]) >= 0){
        return ret = max(ar[i] + solve(i+1,n-ar[i]) , solve(i+1,n));
    }
    else return ret = solve(i+1,n);
}


int main()
{
    fast;
    int test;
    cin >> test;
    while(test--){
        cin >> n >> k;
        rt += 10;
        for(int i = 0; i<k; i++)cin >> ar[i];
        cout << solve(0,n) << endl;
    }


}
/*



*/

