#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define ss           s.size()
#define sot(v)       sort(v.begin(),v.end())
#define all(v)       (v).begin(), (v).end()
#define rev(v)       reverse(v.begin(),v.end())
#define revsot(v)    sort(v.rbegin(),v.rend())
#define yes          cout<<"YES"<<endl
#define no           cout<<"NO"<<endl
#define ii           pair<int, int>
#define iib        pair<bool, bool>
#define int          long long
#define ll           long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 2e6+100;
const int inf = 1e18;
const int mod = 1e9+7;
using namespace std;


void solve(){
    int n;
    cin >> n;
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int ans = 0;

    for(int b=0; b<=B and b*2 <= n; b++){
        for(int c = 0; c<=C and (b*2 + c*5) <= n; c++){
            for(int d = 0; d<=D and (b*2 + c*5 + d*10)<=n; d++){
                if(b*2 + c*5 + d*10 >= (n-A))ans++;
            }
        }
    }
    cout << ans << endl;
}

int32_t main(){
    Fast;
    int tst;
    cin>>tst;
    for(int i=1; i<=tst; i++)
        solve();
    return Okay;
}
