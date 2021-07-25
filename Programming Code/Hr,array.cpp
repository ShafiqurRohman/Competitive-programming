#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,k;
    cin>>n;
    while(n--){
            k=0;
    cin>>a>>b>>c;
    for(int i=b;i<=c;i++){
        if(a%i==0)k++;}
        cout<<k<<endl;

    }
return 0;}
