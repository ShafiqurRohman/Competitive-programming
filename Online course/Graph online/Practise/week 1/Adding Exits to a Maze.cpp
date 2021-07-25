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

bool vis[1005];
vector<int>graph[1005];

void dfs(int start){
    vis[start] = true;
    for(int i =0; i<graph[start].size(); i++){
        int u = graph[start][i];
        if(!vis[u]){
            dfs(u);
        }
    }
}


int main(){
    Fast;
    int n, e;
    cin>>n>>e;
    int u,v;
    for(int i =0; i<e; i++){
        cin>>u>>v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    int cnt = 0;
    memset(vis, 0, sizeof vis);
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            cnt++;
            dfs(i);
        }
    }
   cout<<cnt<<endl;

    return Okay ;
}

