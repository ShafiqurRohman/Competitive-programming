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
const int mod = 1e9+7;
using namespace std;

int cSum[100007], power[100007];

int charValue(char ch){
    if(ch>='a' and ch <= 'z')return ch - 'a' +1;
    return ch - 'A' + 27;
}

void init(string s){
    int x = charValue(s[0]);
    cSum[0] = x;
    power[0] = 1;
    int p = 97, pp = 97;
    int len = ss;
    for(int i=1; i<len; i++){
        int x = charValue(s[i]);
        cSum[i] = (cSum[i-1] + (x%mod *p%mod)%mod)%mod;
        power[i] = p;
        p = (p%mod * pp%mod)%mod;
    }
}

int Hash(string s){
    int ans = charValue(s[0]);
    int len =s.size();
    for(int i = 1; i<len; i++){
        ans = (ans + (charValue(s[i])%mod * power[i]%mod))%mod;
    }
    return ans;
}

void solve(){
    string s;
    cin>>s;
    init(s);
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        int x = Hash(str);
        int r = str.size()-1;
        bool ok = false;
        for(int l =0; r<ss; l++, r++){
            int ans = (x%mod * power[l]%mod)%mod;
            int res;
            if(l == 0)res = cSum[r];
            else res = (cSum[r] - cSum[l-1] +mod)%mod;
            if(ans == res){
                ok = true;
                break;
            }
        }
        if(ok)cout<<'y'<<endl;
        else cout<<'n'<<endl;
    }
    memset(cSum, 0, sizeof cSum);
    memset(power, 0, sizeof power);
}

int32_t main(){
    Fast;
    int tst;
    cin>>tst;
    while(tst--)
    solve();
    return Okay;
}
