#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n,c,d=0,k=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        c=b-a;
        d=d+c;
       if(k<d)k=d;
    }
    cout<<k<<endl;
return 0;}
