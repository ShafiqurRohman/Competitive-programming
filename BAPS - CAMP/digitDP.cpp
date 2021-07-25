#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast      ios_base::sync_with_stdio(false); cin.tie(0);
#define vs        v.size()
#define ss        s.size()
#define sot(v)    sort(v.begin(),v.end())
#define all       v.begin(), v.end()
#define rev(v)    reverse(v.begin(),v.end())
#define revsot(v) sort(v.rbegin(),v.rend())
#define yes       cout<<"Yes"<<endl
#define no        cout<<"No"<<endl
#define ii        pair<int, int>
#define int       long long
#define ull       unsigned long long
#define pb        push_back
#define mpp       make_pair
#define Okay      0
#define pi        3.14159

const int mx = 1e5+100;
const int cont = 1e18;
const int mod = 1e9+7;
using namespace std;

int mem[18][180][2];//18 length string er jonno.
string temp;

int dp(int pos, int digitSum, bool isSmall){
    if(pos >= temp.size())return digitSum;
    int &ret = mem[pos][digitSum][isSmall];
    if(ret != -1)return ret;
    ret = 0;
    int posMax = temp[pos]-'0';
    if(isSmall)posMax = 9;
    for(int i=0; i<=posMax; i++){
        int newIsSmall = isSmall | (i<posMax);
        ret += dp(pos+1, digitSum+i, newIsSmall );
    }
    return ret;
}

void solve(){
   int l, r;
   cin>>l>>r;
   if(l>0)l--;
   temp = to_string(r);
   memset(mem, -1, sizeof mem);
   int rr = dp(0,0,0);
   temp = to_string(l);
   memset(mem, -1, sizeof mem);
   int lr = dp(0, 0, 0);
   cout<<rr - lr<<endl;
}

int32_t main(){
    Fast;
    int tst;
    cin>>tst;
    while(tst--)
        solve();
    return Okay;
}
