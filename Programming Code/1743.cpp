#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5],b[5],i,j,c=0;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    for(i=0;i<5;i++){
        cin>>b[i];
    }
     for(i=0;i<5;i++){
        if(a[i]!=b[i]){
            c++;
        }
    }
    if(c==5){
        cout<<"Y"<<endl;
    }
    else cout<<"N"<<endl;
return 0;}
