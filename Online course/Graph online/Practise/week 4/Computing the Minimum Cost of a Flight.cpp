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

#define infinity 1<<30  //2^30

struct node{
    int u;
    int cost;
    node(int _u, int _cost){
        u = _u;
        cost = _cost;
    }
    bool operator < ( const node& p ) const {   return cost > p.cost;   } //Operator overloading

};

int dijstkra(int n, vector<int>g[], vector<int>cost[], int source, int last){

    int distance[n+1];
    for(int i=1;i<=n;i++) {
        distance[i] = infinity;
    }

    priority_queue<node>q;
    q.push(node(source,0));
    distance[source] = 0;

    while(!q.empty()){
        node top = q.top();
        q.pop();
        int u=top.u;

        for(int i=0;i<(int)g[u].size();i++){
            int v=g[u][i];

            //Relaxation
            if(distance[u] + cost[u][i] < distance[v]){
                distance[v] = distance[u] + cost[u][i];
                q.push(node(v, distance[v]));
            }
        }
    }
    return distance[last];
}
int main(){

    vector<int>g[10005], cost[10005]; //this code can handle maximum 10000 nodes
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
    for(int i=0;i<numEdges;i++){
        int u, v, w;
        cin>>u>>v>>w;
        g[u].push_back(v);
        cost[u].push_back(w);
    }
    int source, last;
    cin>>source>>last;
    int x = dijstkra(numNodes, g, cost, source, last);
    if(x == infinity)cout<<"-1"<<endl;
    else cout<<x<<endl;

    return Okay;
}

