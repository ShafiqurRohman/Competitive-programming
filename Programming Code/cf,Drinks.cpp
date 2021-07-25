#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,sum=0.0,n;
    cin>>n;
   for(int i=0;i<n;i++){
        cin>>a;
        sum=sum+a;
    }

    cout<<fixed<<setprecision(12)<<sum/n<<endl;

return 0;}
