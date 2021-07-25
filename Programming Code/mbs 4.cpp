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

const int mx = 1e5+5;
const int inf = 1e18;
const int mod = 1e9;
using namespace std;


void solve(){

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s ;
        string ans = "";
        for(int i=0; i<ss; i++){
            if(s[i] == '.')break;
            ans += s[i];
        }
        int an = stoi(ans);
        if(an >=0 and an <= 127){
            cout << "A" << endl;
        }
        else if(an >=128 and an <= 191){
            cout << "B" << endl;
        }
        else if(an >=192 and an <= 223){
            cout << "C" << endl;
        }
        else if(an >=224 and an <= 239){
            cout << "D" << endl;
        }
        else if(an >=240 and an <= 255){
            cout << "E" << endl;
        }
        else cout << 0 << endl;
    }
}

int32_t main(){
    Fast;
    int tst;
//    cin >> tst;
//    for(int i=1; i<=tst; i++)
        solve();

    return Okay;
}
