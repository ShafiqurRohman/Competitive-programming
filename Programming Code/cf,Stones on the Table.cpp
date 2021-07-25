#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n,c=0;
    string a;
cin>>n>>a;
for(int i=1;i<n;i++){
    if(a[i-1]==a[i])c++;
}
cout<<c<<endl;

return 0;}
