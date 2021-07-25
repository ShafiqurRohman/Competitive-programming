
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

void solve(){
    int n, t;
    cin>>n>>t;
    vector<int>stor1, stor2;
    for(int i = 0;i<n; i++){
        int a;
        cin>>a;
        if(i%2)stor1.pb(a);
        else stor2.pb(a);
    }

    vector<int>subset1, subset2;
    int len = stor1.size();
    for(int i=0; i<(1<<len); i++){
        int sum = 0;
        for(int j=0; j<=len; j++){
            if(i&(1<<j)){
                sum += stor1[j];
            }
        }
        subset1.pb(sum);
   }
   len = stor2.size();
    for(int i=0; i<(1<<len); i++){
        int sum = 0;
        for(int j=0; j<=len; j++){
            if(i&(1<<j)){
                sum += stor2[j];
            }
        }
        subset2.pb(sum);
   }
   sot(subset2);
    int ans = 0, cur;
    len = subset1.size();
    for(int i=0; i<len; i++){
        cur = subset1[i];
        if(cur>t)continue;
        int it = upper_bound(subset2.begin(), subset2.end(), t-cur) - subset2.begin()-1;
        cur += subset2[it];
        ans = max(ans, cur);
    }
    cout<<ans<<endl;

}

int32_t main() {
    Fast;
    solve();
    return Okay;
}
