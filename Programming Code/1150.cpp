#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum=0,c=0;
    cin>>a;
    while(true){
    cin>>b;
    if(b>a)break;}
    while(true){
            c++;
        sum=sum+a;
    if(sum>=b)break;
    a++;
    }
    cout<<c<<endl;

return 0;}
