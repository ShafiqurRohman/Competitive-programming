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

const int mx = 2e5+100;
const int cont = 1e18;
const int mod = 1e9+7;
using namespace std;

vector<int>graph[mx], ans;
int col[mx], color[mx];
bool vis[mx];

void dfs(int node){
    vis[node] = 1;
    if(color[col[node]] == 0)ans.pb(node);
    color[col[node]]++;
    for(auto child : graph[node]){
        if(!vis[child]){
            dfs(child);
        }
    }
    color[col[node]]--;
}

void solve(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> col[i];
    }
    for(int i=1; i<n; i++){
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    dfs(1);
    sot(ans);
    for(auto it : ans)cout << it << endl;
}

int32_t main(){
    Fast;
    int tst;
//    cin>>tst;
//    while(tst--)
    solve();
    return Okay;
}
