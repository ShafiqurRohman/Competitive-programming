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

struct node{
    int ele;
    int mx;

    node(int _ele, int _mx){
        ele = _ele;
        mx = _mx;
    }
};

stack<node>st;

void solve(){
      int n;
      cin>>n;
      string s;
      int m;
      for(int i =0; i<n; i++){
        cin>>s;
        if(s == "push"){
            cin>>m;
            if(st.empty()){
                st.push(node(m, m));
            }
            else{
                st.push(node(m, max(st.top().mx, m)));
            }
        }
        else if(s == "pop")st.pop();
        else if(s == "max")cout<<st.top().mx<<endl;
      }
}

int main(){
    solve();
    return Okay;
}
