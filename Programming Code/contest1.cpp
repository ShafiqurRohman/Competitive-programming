#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,x,y,n;
      cin>>a>>b;
      x=a;
      y=b;
      while(y!=0){
        n=x%y;
        x=y;
        y=n;
      }
      cout<<x<<endl;
return 0;}
