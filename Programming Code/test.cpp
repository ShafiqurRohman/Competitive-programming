#include<bits/stdc++.h>
using namespace std;

vector<int>Graph[100];
bool vis[100];
int level[100];

void bfs(int startNode){
    queue<int>q;
    q.push(startNode);
    level[startNode] = 1;
    vis[startNode] = true;
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(auto child : Graph[parent]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[parent]+1;
            }
        }
    }
}

int main() {

    int node, edge;
    cin >> node >> edge;

    for(int i=0; i<edge; i++){
        int x, y;
        cin >> x >> y;
        Graph[x].push_back(y);
        Graph[y].push_back(x);
    }

    bfs(1);

    int checkNum;
    cin >> checkNum;
    while(checkNum--){
        int checkLevel;
        cin >> checkLevel;
        cout << level[checkLevel]<< endl;
    }

    return 0;
}
