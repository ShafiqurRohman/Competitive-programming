#include<bits/stdc++.h>
using namespace std;

int dilfunction(int *ar, int n,int i, int j){
    if(i == n){
        if(ar[i]%2 == 0)ar[j++] = ar[i];
        return j;
    }
    if(ar[i]%2 == 0)ar[j++] = ar[i];
    dilfunction(ar,n,i+1,j);
}
int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int nn = dilfunction(ar,n-1,0,0);
    for(int i=0;i<nn;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    return 0;
}
