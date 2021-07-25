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

vector<int>graph[100005];
bool vis[100005];
int dis[100005];

void bfs(int start, int last){
    queue<int>q;
    q.push(start);
    dis[start] = 0;
    vis[start] = true;
    while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int i=0; i<graph[u].size(); i++){
                int v = graph[u][i];
                if(!vis[v]){
                    vis[v] = true;
                    dis[v] = dis[u]+1;
                    if(v == last)return;
                    q.push(v);
                }
            }
      }
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
    memset(dis, -1, sizeof dis);
    int start, last;
    cin>>start>>last;
    bfs(start, last);
    cout<<dis[last]<<endl;

}

int main(){
    Fast;

    solve();

	return Okay;
}
