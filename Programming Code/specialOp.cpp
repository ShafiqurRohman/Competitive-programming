#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll a,b,c
    for(;;){
        cin>>a>>b>>c;
            if(a==0&&b==0&&c==0)break;
           if(((a*a)+(b*b))==c*c)cout<<"right"<<endl;
           else cout<<"wrong"<<endl;
    }
    return 0;
}
