#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define ss               s.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define int                long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

using namespace std;
const int  cont = 10e6;
static const int inf = 1e11;

int ar[3000000];

int find_parent(int root){
    if(ar[root]<0)return root;
    else return ar[root] = find_parent(ar[root]);
}

void Union(int x, int y){
    x = find_parent(x);
    y = find_parent(y);
    if(x == y)return;
    else{
        ar[x] = min(ar[x], ar[y]);
        ar[y] = x;
    }
}


void solve(){
   int n,e;
   cin>>n>>e;
   for(int i=1; i<=n; i++)ar[i] = -i;
   int x,y;
   for(int i=0; i<e; i++){
    cin>>x>>y;
    Union(x,y);
   }
   int tst;
   cin>>tst;
   while(tst--){
        int a, b;
        cin>>a>>b;
        int left = find_parent(a);
        int right = find_parent(b);
       if(left != right){
            if(ar[left]<ar[right]){
                cout<<a<<endl;
            }
            else{
                cout<<b<<endl;
            }
       }
       else cout<<"TIE"<<endl;
   }
}

int32_t main(){
    Fast;
    solve();
    return Okay;
}

