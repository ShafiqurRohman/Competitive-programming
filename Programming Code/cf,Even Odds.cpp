#include<bits/stdc++.h>
using namespace std;
int main(){
   unsigned long long  int a,b,ans;
    cin>>a>>b;
 if(a%2==0){
    if((a/2)<b){
       b=b-(a/2);
        ans=((b*b)+b)-(((b-1)*(b-1))+(b-1));
    }
    else{
         ans=(b*b)-((b-1)*(b-1));
    }
 }
 else{
        if((a/2)+1<b){
       b=b-(a/2)-1;
        ans=((b*b)+b)-(((b-1)*(b-1))+(b-1));
    }
    else{
         ans=(b*b)-((b-1)*(b-1));
    }

 }
 cout<<ans<<endl;
return 0;}

