#include<bits/stdc++.h>
using namespace std;
int main(){
    int  j=0,c=0;
    string a,b="hello";
cin>>a;
for(int i=0;i<a.size();i++){
    if(a[i]==b[j]){
        c++;
        j++;
    }
}
    if(c==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


return 0;}

