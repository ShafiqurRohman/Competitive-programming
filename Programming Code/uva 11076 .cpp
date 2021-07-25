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
#define int          long long
#define ll           long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 1e6+5;
const int inf = 1e18;
const int mod = 1e9;
using namespace std;

void solve(){
    int n;
    ull f[15] = {1};
    for(int i=1; i<15; i++)f[i] = f[i-1]*i;

    while(cin >> n and n){
            int dec[10] = {0};
            int sum = 0, x;
            for(int i=0; i<n; i++){
                int a;
                cin >> a;
                dec[a]++;
                sum += a;
            }
            ull ans = f[n];
            for(int i=0; i<10; i++){
                ans /= f[dec[i]];
            }
            int tem = 0, incres = 1;
            for(int i=1; i<=n; i++){
                tem += incres;
                incres *= 10;
            }
            ans = (ans*sum) / n*tem;
            cout << ans << endl;
    }
}

int32_t main(){
    Fast;
    int tst;
//    cin >> tst;
//    while(tst--)
            solve();
    return Okay;
}

