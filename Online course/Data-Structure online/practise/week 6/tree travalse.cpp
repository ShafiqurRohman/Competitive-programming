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

const int inf = 1e9;
const int cont = 1e18;
using namespace std;

struct Node{
    int value, left, right;
};

Node ar[2000000];

void take_input(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>ar[i].value>>ar[i].left>>ar[i].right;
    }
}

void in_order_print(int root){
    if(ar[root].left != -1){
        in_order_print(ar[root].left);
    }
    cout<<ar[root].value<<" ";
    if(ar[root].right != -1){
        in_order_print(ar[root].right);
    }
}

void pre_order_print(int root){
    cout<<ar[root].value<<" ";
    if(ar[root].left != -1){
        pre_order_print(ar[root].left);
    }
    if(ar[root].right != -1){
        pre_order_print(ar[root].right);
    }
}

void post_order_print(int root){
    if(ar[root].left != -1){
        post_order_print(ar[root].left);
    }
    if(ar[root].right != -1){
        post_order_print(ar[root].right);
    }
     cout<<ar[root].value<<" ";
}

void solve(){
    take_input();
    in_order_print(0);
    cout<<endl;
    pre_order_print(0);
    cout<<endl;
   post_order_print(0);
}

int32_t main() {
   Fast;
   solve();
    return Okay;
}

