#include<bits/stdc++.h>
using namespace std;
int n,x,y,a,b,c,z;
int conver(int a,int b){
      x=a;
      y=b;
     while(y!=0){
        n=x%y;
        x=y;
        y=n;
      }

return x; }
int main(){
   cin>>n;
   for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
      x=conver(a,b);
      z=c%x;
if(z==0)cout<<"Case "<<i<<": Yes"<<endl;
else    cout<<"Case "<<i<<": No"<<endl;
}
return 0;

}
