#include<bits/stdc++.h>
using namespace std;
int main(){
    int  n;
    string a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
     int s=a.size();
     if(s<=10){
        cout<<a<<endl;
     }
     else{
        cout<<a[0]<<s-2<<a[s-1]<<endl;
     }
     }

return 0;}

