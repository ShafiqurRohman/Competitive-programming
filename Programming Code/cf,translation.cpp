#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int c=0;
    cin>>a>>b;
  for(int i=0;i<a.size();i++){
    if(a[i]==b[(a.size()-1)-i])c++;
  }
  if(c==a.size())
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
return 0;}
