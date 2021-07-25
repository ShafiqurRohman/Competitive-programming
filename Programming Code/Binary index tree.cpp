#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mx = 1e7;
int tree[mx];

void buildUpdateTree(int index, int value, int n){

    while(index <= n){
        tree[index] += value;
        index += index & (-index);
    }

    return;
}


int query(int index){
    ll sum = 0;

    while(index>0){
        sum += tree[index];
        index -= index & (-index);
    }

    return sum;
}


int main(){

    int n;
    cin>>n;
    for(int i=1 ; i<=n; i++){
            int a;
        cin>>a;
        buildUpdateTree(i, a, n);
    }

    int   q;
    cin>>q;
    while(q--){
            int index;
        cin>>index;
    cout<<query(index)<<endl;
    }

    return 0;
}
