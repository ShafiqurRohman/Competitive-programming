#include<bits/stdc++.h>
using namespace std;
int arr[10000];
void selection_sort(int arr[],int n){
int i,j,index,temp;
for(i=0;i<n;i++){
        index=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[index]){
            index=j;
        }
    }
    if(index!=i){
        temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
      }
   }
}
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
selection_sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
