#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,c=0,n;
    string a;
    cin>>n;
//    cin.ignore();
    for(int i=0;i<n;i++){
        cin>>a;
        if(a=="donate"){
            cin>>b;
            c=c+b;
        }
        else
            cout<<c<<endl;
    }
return 0;}
