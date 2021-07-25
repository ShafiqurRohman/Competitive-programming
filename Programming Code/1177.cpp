#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ar[100],a,j;
    cin>>a;
    for(int i=0; i<100; i++){
       ar[i]=a;
        cout<<"N"<<"["<<i<<"]"<<" "<<"="<<" "<<fixed<<setprecision(4)<<ar[i]<<endl;
        a=a/2;
        }



    return 0;}

