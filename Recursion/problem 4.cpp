#include<bits/stdc++.h>
using namespace std;
void dilfunction(int i,int n){
    if(i == 0){
        cout<<"1 ";
        return;
    }

    dilfunction(i-1,n);
    if(i == 1 && n>1)  cout<<"+ x + ";
    else if(i == 1 && n<=1)  cout<<"+ x";
    else if(n==i)cout<<"x^"<<n<<endl;
    else cout<<"x^"<<i<<" + ";
}
int main(){
    int n;
    cin>>n;
    dilfunction(n-1,n-1);
    return 0;
}
