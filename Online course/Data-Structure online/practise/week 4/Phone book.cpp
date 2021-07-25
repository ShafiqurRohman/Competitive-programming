#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define ss               s.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define ll                long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

using namespace std;
const int ll cont = 10e6;
static const ll inf = 1e11;
void solve(){
   string a, b, c;
   map<string , string>mp;
   int n;
   cin>>n;
   while(n--){
    cin>>a;
    if(a == "add"){
     cin>>b>>c;
      mp[b] = c;
    }
    else if(a == "find"){
            cin>>b;
            if(mp[b] == ""){
                cout<<"not found"<<endl;
            }
            else cout<<mp[b]<<endl;
    }
    else{
        cin>>b;
        mp.erase(b);
    }
   }
}

int main(){
    Fast;
    solve();

    return Okay;
}
