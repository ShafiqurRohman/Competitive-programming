#include<bits/stdc++.h>
using namespace std;

const int mx  = 1e6+7;

int check[26];

int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++){
        check[s[i]-'a']++;
    }
    int ans = -mx;
    string  a = "abcdefghijklmnopqrstuvwxyz";
    string b = a;
    for(int l = 0; l<26; l++){
        for(int r = 0; r<26; r++){
            if(a[l] == b[r])continue;
            char ch[2];
            ch[0] = a[l];
            ch[1] = b[r];
            //cout << ch[0] << ch[1] << endl;
            int cnt = 0;
            int ind = 0;
            for(int i=0; i<n; i++){
                if(s[i] == ch[ind]){
                    cnt++;
                    ind++;
                    ind%=2;
                }
            }
            //cout << cnt << endl;
            //cout << check[ch[0]-'a'] + check[ch[1]-'a'] << endl;
            if(check[ch[0]-'a'] + check[ch[1]-'a'] != cnt)cnt = 0;
            ans = max(ans, cnt);
        }
    }
    if(ans == 1)ans = 0;
    cout << ans << endl;
    return 0;
}
