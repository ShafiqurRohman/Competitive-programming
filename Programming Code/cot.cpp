#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=-1,i;
    cin>>n;
    string a[n+5],ar[n+5],arr[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i]>>ar[i]>>arr[i];
    }
     for(i=0;i<n;i++){
        if(arr[i] > k){
            arr[i]=arr[k];
        }
    }
    cout<<a[i]<<ar[i]<<arr[i];
return 0;
}
