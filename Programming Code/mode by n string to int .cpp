#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll int mod(string s, ll int n){
       ll int k = 0;

        for(int i=0;i<s.size();i++){
            k = k*10 + (s[i]-'0');
            k %= n;
        }
        return k;
}

int main(){

    string s = "1234";
    int n = 10;
    cout<<mod(s,n)<<endl;
    return 0;
}
