#include<bits/stdc++.h>
using namespace std;

const int m = 1000;
int ar[m];

void mergeElement(int l, int m, int r){
 int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)L[i] = ar[l + i];

    for (j = 0; j < n2; j++)R[j] = ar[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            ar[k] = L[i];
            i++;
        }
        else {
            ar[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1) {
        ar[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2) {
        ar[k] = R[j];
        j++;
        k++;
    }

}

void makeMerge(int left, int right){
    if(left >= right){
        return;
    }
    int mid = left + (right - left)/2;
    makeMerge(left, mid);
    makeMerge(mid+1, right);
    mergeElement(left,mid, right);
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
