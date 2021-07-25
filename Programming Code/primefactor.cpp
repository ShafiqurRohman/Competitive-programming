    #include <bits/stdc++.h>
    #define ll long long
    #define pb push_back
    using namespace std;

    void primefact(ll n){
        vector<ll>prime;//ei vector e ami sob prime number gula rakhlam.
        ll x=n;
       bool arr[n+10];
       for(ll i=4;i<n;i+=2){//eikhane ami sob jhor number gula not prime kore rakhlam.
        arr[i]=true;
       }
       for(ll i=3;i<sqrt(n);i+=2){//ei loop ami ager prime number er gunito gula bad dilam prime number theke.
        if(arr[i]==0){
            for(ll j=i*i;j<n;j+=i){
                arr[j]=true;
               }
           }
       }
    for(ll i=2;i<n;i++){//ei loop e ami prime number gula vector e push korlam.
        if(arr[i]==0)prime.pb(i);
       }

    vector<ll >ans;//prime er factor gula neyer jonno
    ll sqrtn=sqrt(n);
    for(ll i=0;prime[i]<=sqrtn,i<prime.size();i++){
        while(n%prime[i]==0){
            n=n/prime[i];
            ans.pb(prime[i]);
        }sqrtn=sqrt(n);//ei kaj ta kora hoyeche n er man aro choto korar jonno.
    }
    if(n!=1)ans.pb(n);
    cout<<x<<" "<<"="<<" ";
    cout<<ans[0];
    for(ll i=1;i<ans.size();i++){
        cout<<" "<<"x"<<" "<<ans[i];
    }cout<<endl;
    ans.clear();
    prime.clear();

    }
    void primefactneg(ll n){
        vector<ll>prime;
       ll x=n;
       bool arr[n+10];
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

    vector<ll >ans;
    ll sqrtn=sqrt(n);
    for(ll i=0;prime[i]<=sqrtn,i<prime.size();i++){
        while(n%prime[i]==0){
            n=n/prime[i];
            ans.pb(prime[i]);
        }sqrtn=sqrt(n);
    }
    if(n!=1)ans.pb(n);
    cout<<x<<" "<<"="<<" "<<"-1"<<" "<<"x"<<" ";
    cout<<ans[0];
    for(int i=1;i<ans.size();i++){
        cout<<" "<<"x"<<" "<<ans[i];
    }cout<<endl;
    ans.clear();
    prime.clear();
    }
    int main(){

    ll int n;
    while(cin>>n &&n!=0){

    if(n>0)primefact(n);
    else {
            primefactneg(abs(n));
          }
    }
            return 0;
        }

