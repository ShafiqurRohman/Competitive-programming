#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned  long long   int a,b,n;
double sum=0.0;
cin>>n;
    while(n--){
         cin>>a;
    for(double i=1.0;i<=a;i++){
            sum=sum+(1/i);}
        cout<<sum<<endl;
}
return 0;}
