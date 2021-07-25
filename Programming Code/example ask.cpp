#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <double>v;
    double sum=0.0;
    for(long double i=1.0;i<10000000;i++){
        sum=sum+(1/i);
        v.push_back(sum);
    }
    int n,a;
    cin>>n;
    while(n--){
            cin>>a;
    cout<<fixed<<setprecision(14)<<v[a-1]<<endl;
    }

return 0;}
