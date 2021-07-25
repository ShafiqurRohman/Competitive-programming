#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 100;
int ar[mx], tree[mx*4];

void buildTree(int node, int b, int e){
    if(b == e){
        tree[node] = ar[b];
        return;
    }

    int mid = (b+e)/2;

    int left = node *2;
    int right = left +1;

    buildTree(left, b, mid);
    buildTree(right , mid+1 ,e);

    tree[node] = tree[left] + tree[right];
   // return;
}

int query(int node, int b, int e, int i, int j){
    if(e < i || j < b){
        return 0;
    }
    if(b >= i && e <= j){
        return tree[node];
    }
//     if (i > e || j < b)
//        return 0; //বাইরে চলে গিয়েছে
//    if (b >= i && e <= j)
//        return tree[node]; //রিলেভেন্ট সেগমেন্ট

    int mid = (b+e)/2;

    int left = node*2;
    int right = left +1;

    int p1 = query(left , b, mid, i, j);
    int p2 = query(right, mid+1, e, i , j);

    return p1+p2;

}

void update(int node, int b, int e, int i , int value){
    if( e<i || i<b){
        return;
    }
    if(b == e){
        tree[node] = value;
        return ;
    }
//    if (b >= i && e <= i) { //রিলেভেন্ট সেগমেন্ট
//        tree[node] = value;
//        return;
//    }

    int mid = (b+e)/2;

    int left = node*2;
    int right = node*2 +1;

    update(left , b, mid, i, value);
    update(right , mid+1, e, i, value);

    tree[node] = tree[left] + tree[right];
    //return;

}

int main(){
    int n;
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        cin>>ar[i];
    }

     buildTree(1, 1, n);
     cout<<query(1,1,n,1,8)<<endl;

     for(int i=1;;i++){
        if(tree[i] == 0)break;
        cout<<tree[i] << " ";
    }
    cout<<endl;


    update(1,1,n,8,1);
    cout<<query(1,1,n,1,8)<<endl;

    for(int i=1;;i++){
        if(tree[i] == 0)break;
        cout<<tree[i] << " ";
    }
    cout<<endl;

    return 0;
}


