#include<bits/stdc++.h>
using namespace std;
 int  dilfunction(int n){
    if(n == 0){
        return 1;
    }
    return n*dilfunction(n-1);
}
int main(){
    int a,n;
    cin>>n;
   cout<< dilfunction(n);
    return 0;
}

