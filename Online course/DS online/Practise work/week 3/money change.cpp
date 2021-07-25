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

    void solve(){
     int n;
     cin>>n;
     int x = n/10;
     n %= 10;
     x += (n/5);
     n %= 5;
     x += n;
     cout<<x<<endl;

}

    int main(){

         solve();

    return Okay;

    }

