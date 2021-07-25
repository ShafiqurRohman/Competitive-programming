#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string b[n+5],temp;
    char a;
    int c=0,d=0;
    for(int i=0;i<n;i++){
        cin>>a>>b[i];
        if(a=='+') c++;
        else d++;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>b[j]){
              temp=b[i];
              b[i]=b[j];
              b[j]=temp;
            }
        }
    }for(int i=0;i<n;i++){
    cout<<b[i]<<endl;}
    cout<<"Se comportaram: "<<c<<" | Nao se comportaram: "<<d<<endl;
return 0;}


