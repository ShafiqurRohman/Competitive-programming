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

int main() {
    string str1, str2;
    cin>>str1>>str2;

    int m = str1.size();
    int n = str2.size();
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0)dp[i][j] = j;
            else if (j == 0)dp[i][j] = i;
            else if (str1[i - 1] == str2[j - 1])dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = 1 + min(dp[i][j - 1], min(dp[i - 1][j], dp[i - 1][j - 1]));
        }
    }

    cout<<dp[m][n];

    return Okay;
}

