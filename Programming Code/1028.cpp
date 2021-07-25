#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,rem,n;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a>>b;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a<<endl;}
return 0;}

