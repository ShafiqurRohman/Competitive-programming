#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define ss           s.size()
#define sot(v)       sort(v.begin(),v.end())
#define all(v)       (v).begin(), (v).end()
#define rev(v)       reverse(v.begin(),v.end())
#define revsot(v)    sort(v.rbegin(),v.rend())
#define yes          cout<<"YES"<<endl
#define no           cout<<"NO"<<endl
#define ii           pair<int, int>
#define int          long long
#define ll           long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 1e6+5;
const int inf = 1e18;
const int mod = 1e9;
using namespace std;

int n, i, j, k;

void print(){
    cout << "TERM "<<n<<" IS "<< i <<"/" << j << endl;
}
/// for more detail check greekforgreek.
void solve(){

    while(cin >> n){
         i = 1;
         j = 1;
         k = 1;
        if(k == n){
            print();
            continue;
        }
        while(k < n){
            j++, k++;
            if(k == n){
                print();
                continue;
            }
            while(j > 1 and k < n){
                i++, j--, k++;
            }
           if(k == n){
                print();
                continue;
            }
            i++, k++;
            if(k == n){
                print();
                continue;
            }
            while(i > 1 and k<n){
                i--, j++, k++;
            }
            if(k == n){
                print();
                continue;
            }
        }
    }
}

int32_t main(){
    Fast;
    int tst;
//    cin >> tst;
//    while(tst--)
            solve();
    return Okay;
}

