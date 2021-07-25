#include<bits/stdc++.h>
using namespace std;
int main(){
long long  a,b,fact=1,fac=1;
while(cin>>a>>b){
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
     for(int i=1;i<=b;i++){
        fac=fac*i;
    }
    cout<<fact+fac<<endl;
    fact=1;fac=1;
}
 return 0;
}
