#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n,sum,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
       sum=0;
    if(a%2==0)
    a=a+1;
    if(b%2==0)
    b=b-1;
    for(j=a;j<=b;j=j+2){
    sum=sum+j;
        }
        cout<<"case "<<i<<":"<<" "<<sum<<endl;


    }

return 0;}

