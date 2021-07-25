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
const int m = 10e5+10;
using namespace std;


void solve(){

    ll int n;
    cin>>n;
    vector<ll int>v(n),v1(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }

    sot(v);
    sot(v1);


  ll sum = 0;

   for(int i=0;i<v1.size(); i++){
    sum += (v[i]*v1[i]);
   }
   cout<<sum<<endl;

}


int main(){
    Fast;

    solve();

    return Okay ;
}
