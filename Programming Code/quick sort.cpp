#include<bits/stdc++.h>
using namespace std;

int Partition(int *ar, int start, int last){
    int pivot = ar[last];
    int partition_index = start;
    for(int i=start; i<last;i++){
        if(ar[i] <= pivot){
            swap(ar[i], ar[partition_index]);
            partition_index++;
        }
    }
    swap(ar[partition_index], ar[last]);

    return partition_index;
}

void MyQuickSort(int *ar, int start, int last){
    if(start < last){
        int partitionIndex = Partition(ar, start, last);
        MyQuickSort(ar, start, partitionIndex-1);
        MyQuickSort(ar, partitionIndex+1, last);
    }
}

int main(){
    int n;
    cin>>n;
    int ar[n+5];
    for(int i =0; i<n; i++){
        cin>>ar[i];
    }
    MyQuickSort(ar, 0, n-1);

    for(int i=0; i<n; i++)cout<<ar[i]<<" ";
    cout<<endl;

    return 0;
}
