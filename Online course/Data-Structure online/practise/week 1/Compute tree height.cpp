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

const int inf = 1e9;
const int cont = 10e5+10;
using namespace std;

vector<int>graph[100005];
bool vis[100005];
int lev[100005];

void bfs(int root){
    vis[root] = true;
    lev[root] = 1;
    queue<int>q;
    q.push(root);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0; i<graph[u].size();i++){
            int v = graph[u][i];
            if(!vis[v]){
                vis[v] = true;
                lev[v] = lev[u]+1;
                q.push(v);
            }
        }
    }
}

void solve(){
     int n, a;
     cin>>n;
     int root = 0;
     for(int i=0; i<n; i++){
            cin>>a;
            if(a == -1)root = i;
            else{
            graph[a].pb(i);
            graph[i].pb(a);
            }
     }
     memset(vis, 0, sizeof vis);
     memset(lev, -1, sizeof lev);
     bfs(root);
     cout<<*max_element(lev,lev+n-1)<<endl;
}

int main(){
    solve();
    return Okay;
}


