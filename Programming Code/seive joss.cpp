#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define ss           s.size()
#define sot(v)       sort(v.begin(),v.end())
#define all(v)       (v).begin(), (v).end()
#define rev(v)       reverse(v.begin(),v.end())
#define revsot(v)    sort(v.rbegin(),v.rend())
#define yes          cout<<"Yes"<<endl
#define no           cout<<"No"<<endl
#define ii           pair<int, int>
#define int          long long
#define ll           long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 1e7+100;
const int cont = 1e18;
const int mod = 1e9+7;
using namespace std;

vector<int>primes;
bool prime[mx];
/// this code for 1e6 prime er jonno.
void seive(){
    for(int i=2; i<mx; i++){
        if(prime[i] == false){
            primes.pb(i);
            for(int j = i+i; j<mx; j+=i){
                prime[j] = true;
            }
        }
    }
}

void solve(){
    seive();
    for(int i=0; i<primes.size(); i++)cout<<primes[i]<<" ";
    cout<<endl;
}
int32_t main(){
    Fast;
    int tst;
    solve();
    return Okay;
}
