#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,q;
    int i = 0, r;
    double d=0;
    string a;
    for(int i=1;i<=q;i++){
    cin>>n>>a;
    if(a=="bin"){
    while (n!=0){
            r=n%10;
        n/= 10;
        d +=r*pow(2,i);
        ++i;
    }int x=d;
    cout<<x<<endl;

    }
    if(a=="hex"){
        while (n!=0){
            r=n%16;
        n/= 16;
        d +=r*pow(16,i);
        ++i;
    }
    }
    if(a=="dec"){
       cout<<
    }

    }
return 0;}

