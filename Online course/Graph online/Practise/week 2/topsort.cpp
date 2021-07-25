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
stack<int>st;

void dfs(int n){
    visit[n] = true;
    for(int i=0; i<graph[n].size();i++){
        int u = graph[n][i];
        if(!visit[u]){
            dfs(u);
        }
    }
    st.push(n);
}


int main() {
    int n, m;
    cin>>n>>m;
    int u,v;
    for(int i =0; i<m; i++){
        cin>>u>>v;
        graph[u].pb(v);
    }
    memset(visit, 0, sizeof visit);
    for(int i =1; i<=n; i++){
       if(!visit[i]){
        dfs(i);
       }
    }

   while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
   }
   cout<<endl;

  return Okay;
}
