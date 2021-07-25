#include<bits/stdc++.h>
using namespace std;
 int  dilfunction(int a,int n,int sum){
    if(n == 0){
        return pow(a,n);
    }
     sum += (pow(a, n)+dilfunction(a,n-1,sum));
    return sum;
}
int main(){
    int a,n;
    cin>>a>>n;
    int sum =0;
   cout<< dilfunction(a,n-1,sum);
    return 0;
}
