#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ar[100];
    for(int i=0;i<100;i++){
        cin>>ar[i];
            if(ar[i]<=10){
             cout<<"A"<<"["<<i<<"]"<<" "<<"="<<" ";
             cout<<fixed<<setprecision(1)<<ar[i]<<endl;}
            }
    return 0;
}


