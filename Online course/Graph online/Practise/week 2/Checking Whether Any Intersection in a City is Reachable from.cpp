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

bool visit[100005];
vector<int>graph[100005];
vector<int>Rgraph[100005];
vector<ii>pos;
int tim = 0;

bool cmp(ii a, ii b){
    if(a.second >= b.second)return true;
    else return false;
}

void dfs(int n){
    tim++;
    visit[n] = true;
    for(int i=0; i<Rgraph[n].size();i++){
        int u = Rgraph[n][i];
        if(!visit[u]){
            dfs(u);
        }
    }
    pos.pb(ii(n,tim));
    tim++;
}
void dfsvisit(int n){
    visit[n] = true;
    for(int i=0; i<graph[n].size();i++){
        int u = graph[n][i];
        if(!visit[u]){
            dfsvisit(u);
        }
    }
}

int main() {
    int n, m;
    cin>>n>>m;
    int u,v;
    for(int i =0; i<m; i++){
        cin>>u>>v;
        graph[u].pb(v);
        Rgraph[v].pb(u);
    }
    memset(visit, 0, sizeof visit);
    for(int i =1; i<=n; i++){
       if(!visit[i]){
        dfs(i);
       }
    }
    sort(pos.begin(), pos.end(), cmp);
    int cnt = 0;

    memset(visit, 0, sizeof visit);
    for(int i=0; i<n; i++){
        int n = pos[i].first;
        if(!visit[n]){
            cnt++;
            dfsvisit(n);
        }
    }

    cout<<cnt<<endl;

  return Okay;
}
