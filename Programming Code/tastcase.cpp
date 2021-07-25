#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define ll long long
#define pb push_back
using namespace std;
/*
void Sieve(long int n){
    vector<int >prime;
   bool arr[n];
   for(ll i=4;i<n;i+=2){
    arr[i]=true;
   }
   for(ll i=3;i<sqrt(n);i+=2){
    if(arr[i]==0){
        for(ll j=i*i;j<n;j+=i){
            arr[j]=true;
           }
       }
   }
for(ll i=2;i<sqrt(n);i++){
    if(arr[i]==0)prime.pb(i);
   }

}*/
void primefact(ll n){
    vector<int >prime;
   bool arr[n];
   for(ll i=4;i<n;i+=2){
    arr[i]=true;
   }
   for(ll i=3;i<sqrt(n);i+=2){
    if(arr[i]==0){
        for(ll j=i*i;j<n;j+=i){
            arr[j]=true;
           }
       }
   }
for(ll i=2;i<sqrt(n);i++){
    if(arr[i]==0)prime.pb(i);
   }
int l=0;
vector<int >ans;
int sqrtn=sqrt(n);
for(int i=0;prime[i]<=sqrtn,i<prime.size();i++){
    while(n%prime[i]==0){
        n=n/prime[i];
        if(prime[i]!=l){
        ans.pb(prime[i]);
        l=prime[i];
        }
    }
} sqrtn=sqrt(n);
if(n!=1)ans.pb(n);

cout<<ans[0];
for(int i=1;i<ans.size();i++){
    cout<<"x"<<ans[i];
}cout<<endl;

}
int main(){
string a;
ll sum=0;
cin>>a;
 string s="";
if(a[0]=='-'){
    for(int i=1;i<a.size();i++){
       s+=a[i];
    }
    ll x;
    istringstream(s)>>x;
}
//cout<<x<<endl;
primefact(x);

        return 0;
    }
