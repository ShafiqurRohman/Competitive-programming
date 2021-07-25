#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    double sum=0,b=0;
    cin>>a;
    double n=a.size();
    for(int i=0;i<n;i++){
       sum+=a[i]*pow(2,b);
       b++;
    }
    cout<<sum<<endl;
    return 0;
}
