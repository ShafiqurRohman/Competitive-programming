#include<bits/stdc++.h>
using namespace std;
int main(){
    long int a,b,n ;
    vector<int>v;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b;
      for(int j=1;j<=b;j++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(b%2==0){
            if(v[b/2]>v[(b/2)-1]){
                cout<<"Case "<<i<<": "<<v[b/2]<<endl;
            }
            else cout<<"Case "<<i<<": "<<v[(b/2)-1]<<endl;
        }
        else cout<<"Case "<<i<<": "<<v[b/2]<<endl;
        v.clear();

    }


return 0;
}
