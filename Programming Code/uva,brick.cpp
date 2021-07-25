#include<bits/stdc++.h>
using namespace std;

long long int fib(int n){
    if (n <= 3)
        return n;
   else return fib(n-1) + fib(n-2);
}

int main ()
{
    int n ;
    while(cin>>n){
            if(n==0)break;
    cout << fib(n)<<endl;}

    return 0;
}
