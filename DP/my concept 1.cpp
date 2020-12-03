#include<bits/stdc++.h>
using namespace std;
const int m = 1000;
int ar[m];

int fib(int n){
    if(ar[n] != -1){
        return ar[n];
    }
    if(n <= 1){
        return n;
    }
    ar[n] = fib(n-1)+fib(n-2);
    return ar[n];
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n+10;i++){
        ar[i] = -1;
    }
   int x = fib(n);
    cout<<x<<endl;

    return 0;
}
