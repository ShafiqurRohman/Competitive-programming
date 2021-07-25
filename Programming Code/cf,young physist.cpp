#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,x=0,y=0,z=0;
    vector<int>v;
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<3;j++){
            cin>>n;
           v.push_back(n);
        }
    }
     for(int i=0;i<v.size()-2;i=i+3){
          x=x+v[i];
          y=y+v[i+1];
          z=z+v[i+2];
     }

    if(x==0&&y==0&&z==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;}
