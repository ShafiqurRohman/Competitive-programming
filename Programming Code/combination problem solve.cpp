#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define sot(v)       sort(v.begin(),v.end())
#define rev(v)       reverse(v.begin(),v.end())
#define yes          cout<<"Yes"<<endl
#define no           cout<<"No"<<endl
#define ii           pair<int, int>
#define int          long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int inf = 1e6;
const int cont = 1e18;
const int mod = 1e9+7;
using namespace std;

int ans[2020][2020];

void pascal_value(){
    for(int n = 1; n<=2000; n++){
        for(int r =1; r<=n; r++){
            if(r == 1 || r == n){
                ans[n][r] = 1;
            }else{
                ans[n][r] = (ans[n-1][r-1]+ans[n-1][r])%mod;
            }
        }
    }

}

void solve(){
    int a , b;
    cin>>a>>b;
    cout<<ans[a+b][b]<<endl;
}

int32_t main() {
    Fast;
    pascal_value();
    int tst;
    cin>>tst;
    while(tst--)
    solve();
    return Okay;
}

