#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    cin.ignore();
    int x;
    for(int i=0;i<n;i++){
        getline(cin,a);
        x=a.size();
        for(int i=0;i<x;i++){

       if(a[i]!=' '){
        cout<<a[i];
       }
        } cout<<endl;
    }

return 0;}




