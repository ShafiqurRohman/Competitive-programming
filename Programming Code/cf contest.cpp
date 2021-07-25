#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0;
    string a;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>a;
    if(a=="++X"||a=="X++")k++;
    else k--;}
    cout<<k<<endl;
return 0;}
