#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    cout<<a<<b<<c<<endl;
    cout<<b<<c<<a<<endl;
    cout<<c<<a<<b<<endl;
     x=a.size();
    if(x<10){
    for(int i=0;i<x;i++){
        cout<<a[i];
    }}
    else{ for(int i=0;i<10;i++)
        cout<<a[i];

    }
    y=b.size();
    if(y<10){
    for(int j=0;j<y;j++){
        cout<<b[j];
    }}
    else{ for(int j=0;j<10;j++)
        cout<<b[j];

    }
    z=c.size();
    if(z<10){
    for(int k=0;k<z;k++){
        cout<<c[k];
    }}
    else{ for(int k=0;k<10;k++)
        cout<<c[k];

    }

    cout<<endl;
return 0;
}

