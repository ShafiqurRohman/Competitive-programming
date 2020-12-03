#include<bits/stdc++.h>
using namespace std;
const int m = 1000;
int ar[m];
int temp[m];

void mergeElement(int left, int mid, int right){
    int i, j, k;
    for(i = left , j = mid+1, k = left; k <= right ; k++ ){
         if(i == mid+1)temp[k] = ar[j++];
        else if(j == right+1)temp[k] = ar[i++];
        else if(ar[i] <ar[j])temp[k] = ar[i++];
        else temp[k] = ar[j++];
    }

    for(int l = left ; l <= right ;l++){
        ar[l] = temp[l];
    }

}

void makeMerge(int left, int right){

    if(left >= right){
        return ;
    }
    int mid = left +(right-left)/2;

    makeMerge(left, mid);
    makeMerge(mid+1, right);

    mergeElement(left,mid,right);
}

int main(){

    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>ar[i];
    }
    makeMerge(0,n-1);
    for(int i = 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    return 0;
}
