#include<bits/stdc++.h>
using namespace std;
int main(){
    double b;
    int a;
    cin>>a>>b;
     if(a%5==0&&a<=b-0.5) b=b-a-0.50;
    cout<<fixed<<setprecision(2)<<b<<endl;
return 0;}
