#include<bits/stdc++.h>
using namespace std;

int dilfunction(int *ar,int i,int n){
    if(i==n){
        return ar[i];
    }

    return max(dilfunction(ar,i+1,n),ar[i-1]);

}
int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    cout<<dilfunction(ar,1,n-1);

    return 0;
}
