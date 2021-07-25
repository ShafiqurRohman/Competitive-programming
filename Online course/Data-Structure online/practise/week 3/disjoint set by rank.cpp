#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<ll,ll>
#define int              long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

const int inf = 1e9;
const int cont = 1e18;
using namespace std;

int par[30010];
int Rank[30010];

int findParent(int node){
    if(par[node] < 0)return node;
    return par[node] = findParent(par[node]);
}

void make_union(int x, int y){
    x = findParent(x);
    y = findParent(y);
    if(x == y)return;
    if(Rank[x] >= Rank[y]){
        ///x is now parent
        Rank[x]+=Rank[y];
        par[y] = x;
    }
    else{
        ///y is now parent
        Rank[y] += Rank[x];
        par[x] = y;
    }
}

void solve(){
    int n;
    for(int i =1; i<=30005; i++)par[i] = -1;
    for(int i=1; i<=30005; i++)Rank[i] = 1;
    ///"Enter the connector number : ";
    cin>>n;
    int x, y;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        make_union(x,y);
    }
    ///"Enter the number that you want to show : ";
    cin>>n;
    for(int i = 1; i<= n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1; i<=n; i++){
        cout<<Rank[i]<<" ";
    }
    cout<<endl;

}

int32_t main(){
    Fast;
    solve();
    return Okay;
}


