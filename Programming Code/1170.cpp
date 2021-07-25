#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,n,c=0;
    cin>>n;
    while(n--){
        cin>>a;
        while(a>1){
        a=a/2;c++;}
    cout<<c<<" dias"<<endl;
    c=0;}
return 0;}
