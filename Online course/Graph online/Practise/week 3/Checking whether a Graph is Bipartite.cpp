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
const int cont = 10e5+10;
using namespace std;

#define red  1
#define blue 2

vector<int>graph[100005];
int vis[100005];

bool bfs(int start){
    queue<int>q;
    q.push(start);
    vis[start] = red;
    while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int i=0; i<graph[u].size(); i++){
                int v = graph[u][i];
                if(vis[u] == vis[v])return false;
                else if(vis[u] == red){
                   if(!vis[v]){
                        vis[v] = blue;
                        q.push(v);
                      }
                   }
                else{
                        if(!vis[v]){
                        vis[v] = red;
                        q.push(v);
                        }
                    }
              }
        }
      return true;
}

void solve(){
    int a,b,n,e;
    cin>>n>>e;
    for(int i=0; i<e; i++){
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    memset(vis, 0, sizeof vis);
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            if(bfs(i) == false){
                cout<<0<<endl;
                return;
            }
        }
    }
    cout<<1<<endl;

}

int main(){
    Fast;

    solve();

	return Okay;
}
