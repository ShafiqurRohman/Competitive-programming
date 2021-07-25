#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6+7;

int phi[mx];
int prime[mx];

void seive(){
    for(int i=0; i<mx; i++)phi[i] = i;
    for(int i = 2; i<mx; i++){
        if(prime[i] == 0){
            for(int  j = i; j < mx; j+=i){
                prime[j] = 1;
                phi[j] -= phi[j]/i;
            }
        }
    }
}

int main(){
    seive();
    int tst;
    cin >> tst;
    while(tst--){
        int n;
        cin >> n;
        cout << phi[n] << endl;
    }
    return 0;
}

