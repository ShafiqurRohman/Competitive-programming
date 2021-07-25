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


bool negative_cycle(vector<vector<int> > &adj, vector<vector<int> > &cost) {

    vector<long> dist(adj.size(), inf);
    dist[0] = 0;
    for (int i = 0; i <adj.size(); i++) {
        for(int u = 0; u < adj.size(); u++){
            for (int k = 0; k < adj[u].size(); k++) {
                int v = adj[u][k];
                if(dist[v] > dist[u] + cost[u][k]){
                    dist[v] = dist[u] + cost[u][k];
                    if(i == adj.size()-1)return true;
                    }
                }
            }
      }
      return false;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  vector<vector<int> > cost(n, vector<int>());
  for (int i = 0; i < m; i++) {
    int x, y, w;
    cin >> x >> y >> w;
    adj[x-1].push_back(y-1);
    cost[x-1].push_back(w);
  }
  cout << negative_cycle(adj, cost) << endl;
}
/*
7 7
1 2 2
2 3 5
3 1 2
1 4 5
5 7 -2
7 6 1
6 5 2

*/

