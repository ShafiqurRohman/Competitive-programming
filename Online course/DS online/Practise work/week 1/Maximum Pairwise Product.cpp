#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int a,b,n;
    cin >> n;
    vector<ll int >v(n);
    ll int mx = -1 , smx = -1;
    ll index = -1;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(mx < v[i]){
            mx = v[i] ;
            index = i;
        }
    }
     for(int i = 0; i < n; i++){
        if(v[i] > smx && index != i && v[i] <= mx)smx = v[i];
    }

    cout << smx*mx << endl;

    return 0;
}

