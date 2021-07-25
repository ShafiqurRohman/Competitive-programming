#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs            v.size()
#define ss             s.size()
#define be            v.begin(),v.end()
#define pii             pair<int,int>
#define ll               long long
#define ull             unsigned long long
#define pb             push_back
#define mpp          make_pair
#define Okay        0
const int m = 900+10e7;
static ll int inf = 1e18;
using namespace std;

ll int rangeForPisanoTable(ll int n){
       ll  int p1 = 0;
       ll  int p2 = 1;
       ll  int fa;
    for(int i=0;i<n*n;i++){
            fa  = (p1+p2)%n;
            p1 = p2;
            p2 = fa;

        if(p1 == 0 && p2 == 1)return i+1;
        }
}

ll int solve(ll int n, ll int m){
    ll int rem = n%rangeForPisanoTable(m);
    ll int p1 = 0;
    ll int p2 = 1;
    ll int fa = rem;//eikhane inisialize kora hoyech karon jodi rem zero hoi.

    for(int i=1; i<rem; i++){
        fa = (p1+p2)%m;
        p1 = p2;
        p2 = fa;
    }

    return fa;
    //jodi kono gapla mone hoi tahoile return fa%m;
}

int main() {
    Fast;
    ll a,b,c,d,n,k;

    cin>>a;
    cout<<solve(a,10)<<endl;

    return Okay ;
}
