#include<bits/stdc++.h>
using namespace std;
int main(){

    string b[20],temp;
    for(int i=0;i<2;i++){
        cin>>b[i];
    }
    for(int i=0;i<2;i++){
        for(int j=i+1;j<2;j++){
            if(b[i]>b[j]){
              temp=b[i];
              b[i]=b[j];
              b[j]=temp;
            }
        }
    }for(int i=0;i<2;i++){
    cout<<b[i]<<endl;}

return 0;
}

