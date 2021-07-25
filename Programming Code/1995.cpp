#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,b;
    double c=0,d=0,e=0,f=0,g=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a==1001){
            c=(b*1.50);
        }
        if(a==1002){
            d=(b*2.50);
        }
        if(a==1003){
            e=(b*3.50);
        }
        if(a==1004){
            f=(b*4.5);
        }
        if(a==1005){
            g=(b*5.5);
        }
    }cout<<fixed<<setprecision(2)<<c+d+e+f+g<<endl;
return 0;}
