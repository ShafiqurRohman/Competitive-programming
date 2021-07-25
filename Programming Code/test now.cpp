#include<bits/stdc++.h>
using namespace std;

int check[1<<15 + 5], ans[1<<15 + 5];

void solve(){
     int n, a, b;
     cin>>n>>a>>b;
     int cnt = a^b;
     if(n == 1||(n == 2 and (cnt==1||cnt==2))){
        cout<<-1<<endl;
        return;
     }
     int tmp = 0;
     int len = (1<<n);
     for(int i=0; i<n; i++){
        check[1<<i] = i;
     }
     for(int i=1; i<len; i++){
            if(i&1){
                ans[i-1] = 0;
                tmp ^= 1;
            }
             else{
              int bit = tmp^(tmp&(tmp-1));
              ans[i-1] = check[bit]+1;
              tmp ^= (bit<<1);
             }
        }
         ans[len-1] = check[tmp];
         if(!(cnt&(cnt-1))){
              int bad = check[cnt];
              if(ans[0] == bad or ans[len-1] == bad){
                   int nxt = 0;
                   while(ans[len-1] == nxt or ans[0] == nxt)nxt++;
                   for(int i=0; i<len; i++){
                       if(ans[i] == bad)ans[i] = nxt;
                       else if(ans[i] == nxt)ans[i] = bad;
                   }
                }
         }
         tmp = a;
         for(int i=0; i<len; i++){
          cout<<tmp<<" ";
          tmp ^= (1<<ans[i]);
         }
         cout<<endl;
}

int main(){
    int tst;
    cin>>tst;
    while(tst--)
        solve();

    return 0;
}

