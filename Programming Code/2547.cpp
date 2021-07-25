#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,k=0;
    while(cin>>a>>b>>c){
        for(int i=0;i<a;i++){
            cin>>d;
            if(d>=b&&d<=c)k++;
        }cout<<k<<endl;
        k=0;
    }
return 0;}
