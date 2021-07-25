#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){

    int n,a,b;
    vector<int >v;
    cin>>b;
    while(b--){
     double sum=0.0,sum2=0.0;
        cin>>n;
        for(int i=0;i<n;i++){
        cin>>a;
       v.pb(a);
        sum+=a;
        }

    for(int j=0;j<n;j++){
            sum2+=v[j];
            if(sum/2<=sum2){
                    cout<<v[j]<<endl;
            break;
            }
         }
    }
return 0;
 }
