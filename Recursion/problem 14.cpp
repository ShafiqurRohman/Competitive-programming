#include<bits/stdc++.h>
using namespace std;
int dilfunction(int *ar, int i,int n,int see){
    if(i != n){
        int mid = (i+n)/2;
        if(ar[mid] == see){
            return mid;
        }
        if(ar[mid]>see)
        dilfunction(ar,i,mid,see);
        else dilfunction(ar,mid+1,n,see);
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
    int x = dilfunction(ar,0,n,see);
    if(x == -1)cout<<"Not found"<<endl;
    else cout<<x<<endl;
    }
    return 0;
}
