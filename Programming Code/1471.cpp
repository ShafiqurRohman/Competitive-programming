#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n,c=0,i,j;
    while(cin>>a>>n){
       int b[n+5];
       for(int i=0;i<n;i++){
            cin>>b[i];

       }if(a==n){cout<<"*";}
       for(i=1;i<=a;i++){
            c=1;
            for(j=0;j<n;j++){
                if(b[j]==i){
                    c=0;
                    break;

                }
            }
            if(c==1)cout<<i<<" ";
        }
         cout<<endl;
    }

return 0;}
