#include<bits/stdc++.h>
using namespace std;
void dilfunction(int *ar, int i, int *s,int *hi,int n){
    if(i == n){
        *hi = max(*hi, ar[i]);
        return;
    }
    *hi = max(*hi,ar[i]);
    dilfunction(ar,i+1,s,hi,n);
    if(ar[i] < *hi && ar[i] > *s) *s = ar[i];
}
int main(){

    int n;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    int hi = 0;
    int sh = 0;
    dilfunction(ar,0,&sh,&hi,n-1);
    cout<<sh<<endl;
    return 0;
}
