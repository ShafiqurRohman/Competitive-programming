#include<bits/stdc++.h>
using namespace std;
unsigned long long int  arr[10000000];
vector<unsigned long long int>prime;
vector< long long int>factor;

void sieve(){
    unsigned long long int N= 65536;
    unsigned long long int k = N;
     arr[1] = 1;
      for(unsigned long long int i=4; i<=N; i+=2){
        arr[i] = 1;
    }
    for(unsigned long long int i=3; i<=k; i+=2){
        if(arr[i]==0){
            for(unsigned long long int j=i*i; j<=N; j+=2*i){
                arr[j] = 1;
            }
        }
    }

    prime.push_back(2);
    for(unsigned long long int i=3; i<=N; i+=2)
    {
        if(arr[i]==0)
            prime.push_back(i);
    }
}
void factorial(unsigned long long int n){
    int j=1;
    unsigned long long int k = prime.size();
    for(unsigned long long int i=0; i<k && n!=1; i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                j=0;
                n= n/prime[i];
                factor.push_back(prime[i]);

            }
        }
    }
    if(n!=1)
        factor.push_back(n);
    if(j!=0 && n==1)
           factor.push_back(n);
}
int main(){
    sieve();
    long long int n,i,sp=0,m;
    while(scanf("%lld",&n)==1){
            m=n;
        if(m==0)break;
        if(m<0){
            m=-1*m;
            factor.push_back(-1);
        }
        factorial(m);
        for(i =0; i<factor.size(); i++){
             if(i==0){
                printf("%lld = %lld",n,factor[i]);
            }
            else{
                printf(" x %lld",factor[i]);
            }
        }
        printf("\n");

        factor.clear();
    }
    return 0;
}
