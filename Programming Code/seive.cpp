#include<bits/stdc++.h>
#define pb push_back
#define ll long long
const int m = 10e6;
using namespace std;
bool ar[m+10];
vector<int>prime;
void seive(){
    memset(ar,0,sizeof(ar));
    for(int i=4;i<m+10;i+=2)ar[i]=1;

    for(int i=3;i*i<m+10;i+=2){
        if(ar[i]==0){
            for(int j=i*i ; j<m+10 ; j+=i+i){
                    //  for(int j=i*i;j<=m+10;j=j*3){ is same as above loop
                ar[j]=1;
            }
        }
    }
    prime.pb(2);
    for(int i=3;i<m+10;i+=2){
        if(ar[i]==0)prime.pb(i);
    }
}
int main(){
    int a;
    seive();
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<prime[i]<<" ";
    }
return 0;
}
