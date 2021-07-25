#include<bits/stdc++.h>
using namespace std;
int rev(int n,int r){
   if(n == 0){
    return r;
   }
    r = r*10+(n%10);
    //return rev(n/10,r);//eikhne return na dileo ans hoi.
    rev(n/10 , r);
}
int main(){
    int n;
    cin>>n;
    int r = rev(n,0);
    cout<<r<<endl;
    return 0;
}
