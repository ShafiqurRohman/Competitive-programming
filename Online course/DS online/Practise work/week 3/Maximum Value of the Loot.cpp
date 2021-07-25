#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs             v.size()
#define ss             s.size()
#define sot(v)       sort(v.begin(),v.end())
#define rev(v)       reverse(v.begin(),v.end())
#define pii             pair<int,int>
#define ll               long long
#define ull             unsigned long long
#define pb             push_back
#define mpp          make_pair
#define Okay         0

    const int m = 10+10e3;
    using namespace std;

    struct Node{
        double a;
        double b;
    };

    bool cmp(Node n,Node m){
        if(n.a/n.b > m.a/m.b)return true;
        else false;
    }

    void solve(){
     double n,w;
     double x,y;

     cin>>n>>w;
     vector<Node>v(n);
     for(int i =0;i<n;i++){
        cin>>x>>y;
        v[i].a = x;
        v[i].b = y;
    }

    sort(v.begin(),v.end(),cmp);

    double ans = 0.0;
    for(int i=0; i<n && w > 0; i++){
        if(v[i].b <= w){
            ans += (v[i].a);
            w -= v[i].b;
        }
        else{
                ans += (v[i].a *w /v[i].b);
                w = 0;
        }
    }
    cout<<fixed<<setprecision(4)<<ans<<endl;

}

    int main(){

         solve();

    return Okay;

    }


