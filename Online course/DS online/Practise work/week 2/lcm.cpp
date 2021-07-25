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
const int m = 10+10e7;
static ll int inf = 1e18;
using namespace std;

ll a,b,c,d,n,k;

ll int gcd(ll a, ll b){
   if(a%b == 0)return b;
   return gcd(b,a%b);

}

ll int solve(ll a, ll b){
        return a/(gcd(a,b))*b;
}

int main() {
    Fast;

    cin>>a>>b;
    cout<<solve(a,b)<<endl;

    return Okay ;
}

