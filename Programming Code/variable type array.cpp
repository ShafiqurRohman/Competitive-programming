#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m,x,y,l,k;
   cin>>m>>n;
   vector<int>a[m];
   for(int i=0;i<m;i++){
    cin>>x;
    for(int j=0;j<x;j++){
        cin>>y;
        a[i].push_back(y);}
   }
   while(n--){
    cin>>l>>k;
    cout<<a[l][k]<<endl;
   }
return 0;}
