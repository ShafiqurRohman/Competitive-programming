#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int, int>
#define int              long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

const int inf = 1e6;
const int cont = 1e18;
using namespace std;

char Graph[500][500];
bool vis[500][500];
int n;

int dx[6]= {-1, -1, 0, 0, 1, 1};
int dy[6]= {-1, 0, -1, 1, 0, 1};

void bfs(int i, int j){
    queue<int>q;
    q.push(i);
    q.push(j);
    vis[i][j] = true;
    while(!q.empty()){
        int ux = q.front();
        q.pop();
        int uy = q.front();
        q.pop();
        for(int i=0; i<6; i++){
            int vx = ux+dx[i];
            int vy = uy+dy[i];
            if((vx>=1 && vx <= n) && (vy >= 1&&vy <= n) && (!vis[vx][vy]) && (Graph[vx][vy] == 'w')){
                vis[vx][vy] = true;
                q.push(vx);
                q.push(vy);
            }
        }
    }

}

void solve(){
    // for black
    memset(vis, 0, sizeof vis);
   bool check = 0;
    for(int i=1; i<=n; i++){
        if(vis[i][1] == false && Graph[i][1] == 'w'){
            bfs(i, 1);
        }
    }
    for(int i=1; i<=n; i++){
        if(vis[i][n])check = 1;
    }
     if(!check)cout<<"B";
     else cout<<"W";
}

int32_t main() {
   Fast;
   int tc = 1;
   while(cin>>n && n){
        for(int i=1; i<=n; i++){
              for(int j =1; j<=n; j++){
                cin>>Graph[i][j];
              }
        }
        cout<<tc++<<" ";
        solve();
        cout<<endl;
   }
    return Okay;
}
