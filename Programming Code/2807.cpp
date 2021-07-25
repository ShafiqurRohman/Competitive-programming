#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
     cin>>a;
     int ar[45];
     ar[0]=1;
     ar[1]=1;
     for(int i=2;i<a;i++){
        ar[i]=ar[i-2]+ar[i-1];
     }
     cout<<ar[a-1];
     for(int i=a-2;i>-1;i--){
            cout<<" "<<ar[i];}
     cout<<endl;

return 0;
}


