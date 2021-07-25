#include<bits/stdc++.h>
using namespace std;
int dilfunction(int *ar, int i,int n,int see){
    if(i<=n){
        if(ar[i] == see){
            return i;
        }
        dilfunction(ar,i+1,n,see);
    }
    else return -1;
}
int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    int tst;
    cin>>tst;
    while(tst--){
        int see;
    cin>>see;
    if(dilfunction(ar,0,n-1,see) == -1)cout<<"Not found"<<endl;
    else cout<<dilfunction(ar,0,n-1,see)<<endl;
    }
    return 0;
}
