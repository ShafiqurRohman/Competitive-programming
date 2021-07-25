#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c=0,d=0;
    while(cin>>n){
            if(n==0)break;
            for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a>b){
            c++;
        }
        else if(b>a) d++;}
        cout<<c<<" "<<d<<endl;
        c=0;
        d=0;
    }
return 0;
}
