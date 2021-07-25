#include<bits/stdc++.h>
using namespace std;
int arr[10000];


void insertion_sort(int n){
    int i,j,temp;

    for(i=1;i<n;i++){
        j = i-1;
        temp = arr[i];
        while(j >= 0  &&  temp < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

}

    int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   insertion_sort(n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
