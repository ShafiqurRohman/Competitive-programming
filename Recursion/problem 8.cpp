#include<bits/stdc++.h>
using namespace std;
 bool  isprime(int i,int j,int n){
    //cout<<j<<endl;
    if(n<2)return false;
    if(i<=j){
        if(n%i == 0){
            return false;
        }
        return isprime(i+1,j,n);
    }
    else return true;

}
int main(){
    int a,n;
    while(cin>>n){
         if(isprime(2,(int)sqrt(n),n)){
            cout<<"prime"<<endl;
            }
        else cout<<"Not Prime"<<endl;

    }
    return 0;
}

