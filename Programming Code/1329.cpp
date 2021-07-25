#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c=0,d=0;
    while(cin>>n){
            if(n==0)break;
            for(int i=0;i<n;i++){
        cin>>a;
        if(a==0){
            c++;
        }
        else d++;}
        cout<<"Mary won "<<c<<" times and John won "<<d<<" times"<<endl;
        c=0;
        d=0;

    }
return 0;
}

