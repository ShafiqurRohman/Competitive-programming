#include<bits/stdc++.h>
using namespace std;
int main(){
map<string ,string >mp;
string n,m;
while(getline(cin,n)){
    string   a,b;
        if(n=="")break;
        int l;
    for(int i=0;i<n.size();i++){
        if(n[i]==' ')l=i;
    }
   for(int j=0;j<l+1;j++){
    a+=n[j];
   }
   for(int k=l+1;k<n.size();k++){
    b+=n[k];
         }
mp[b]=a;
     }
     while(cin>>m){
       if(mp[m]=="")cout << "eh" << endl;
        else cout << mp[m] << endl;
     }
    return 0;
}/*
dog ogday
cat atcay
pig igpay
froot ootfray
loops oopslay

atcay
ittenkay
oopslay
     */
