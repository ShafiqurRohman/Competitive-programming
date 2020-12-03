#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define ll long long
#define ull unsigned long long
#define ii pair<int,int>
#define iii pair <int,ii>
#define iil pair<ll,ll>
#define iiil pair<ll,iil>
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))
#define s(v) sort(v.begin(),v.end())
#define pf printf
#define sf scanf
#define MIN INT_MIN
#define MAX INT_MAX
#define accepted 0
#define GCD(x,y)  __gcd(x, y)
using namespace std;
const int x = 2000;
int arr[x];
int dp[x][x],k,ans;

int rudraBhai(int i,int n){
    if(i>k)return 0;
    if(n==0)return 0;

       if(dp[i][n]!=-1){
        return dp[i][n];
    }
    if(arr[i]<=n){
        int r1 = arr[i] + rudraBhai(i+1,n-arr[i]);
        int r2 = 0 + rudraBhai(i+1,n);
        ans = max(r1,r2);
    }
    else ans = rudraBhai(i+1,n);

    return dp[i][n] = ans;
}


int main(){
    //fast
    int tst,n;    cin>>tst;
        while(tst--){
            cin>>n>>k;
            for(int i=0;i<k;i++){
                cin>>arr[i];
            }
        for(int i=0;i<2000;i++){
            for(int j=0;j<2000;j++){
                dp[i][j] = -1;
            }
        }
        int real_ans = rudraBhai(0,n);
            cout<< real_ans <<endl;
        }

    return accepted;
}
