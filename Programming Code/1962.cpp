#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a;
    long long x=2015-a;
    if(x<=0){
        x=abs(x)+1;
        cout<<x<<" "<<"A.C."<<endl;
    }
   else cout<<x<<" "<<"D.C."<<endl;}
return 0;}
