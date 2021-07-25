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
const int m = 10e5+10;
using namespace std;
struct data{
   ll int a;
   ll int b;
};

bool cmp(data x, data y){
    if(x.b < y.b)return true;
    if(x.b == y.b){
        return x.a < y.a;
    }
    return false;
}

void solve(){

    ll int n;
    cin>>n;
    vector<data>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].a>>v[i].b;
    }

    sort(v.begin(), v.end(), cmp);

//    cout<<endl;
//    for(int i =0; i<n; i++){
//        cout<<v[i].a<<" "<<v[i].b<<endl;
//    }

    vector<ll>v1;
    ll int last = v[0].b;
    v1.pb(last);

   for(int i =1; i< n; i++){
        if(v[i].a > last){
            last = v[i].b;
            v1.pb(last);
        }
   }

  cout<<v1.size()<<endl;
   for(int i=0;i<v1.size(); i++){
    cout<<v1[i]<<" ";
   }

}


int main(){
    Fast;

    solve();

    return Okay ;
}

