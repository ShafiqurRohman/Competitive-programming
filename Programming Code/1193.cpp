#include<bits/stdc++.h>
using namespace std;
int main(){
   int long long n;
    int d = 0, i = 0, r;
    string a;
    cin>>n>>a;
    if(a[0]=='b'){
    while (n!=0){
        r = n%10;
        n /= 10;
        d += r*pow(2,i);
        ++i;
    }
    }
return 0;}
