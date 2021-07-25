#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b=1,z,l,x=5;
    cin>>a;
    if(a<=15){
    for(int i=4;i>0;i--){
        if(x<a)b++;
         x=x+i;}
         cout<<b<<endl;
    }
    else{
       z=a/5;
       a=a%5;
       if(a==0)cout<<z<<endl;
       else{
    for(int i=4;i>0;i--){
        if(x<a)b++;
         x=x+i;}
       l=z+b;
       cout<<l<<endl;}

    }
return 0;}
