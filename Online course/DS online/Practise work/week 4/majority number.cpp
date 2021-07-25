#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define ss              s.size()
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
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<ll , ll> mp;
    int a;

    for(int i =0; i<n; i++){
        cin>>a;
        mp[a]++;
    }

    int cnt = 0;
    for(auto it:mp){
        if(it.second > n/2)cnt++;
    }
    cout<<cnt<<endl;
}

int main(){

    solve();

    return Okay;
}
