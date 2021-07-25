#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int a){
        int left,right,mid;
        left=0;
        right=n-1;
        while(left<=right){
            mid=(left+right)/2;
            if(arr[mid]==a)return mid+1;
            if(arr[mid]<a)left=mid+1;
            else right=mid-1;
        }
           return -1;
}
int main(){
       int n,a;
       scanf("%d",&n);
       int arr[n+5];
       for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
       }
       scanf("%i",&a);
       printf("%d",binarysearch(arr,n,a));

        return 0;
    }
