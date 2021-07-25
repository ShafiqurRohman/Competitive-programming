#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,temp;
    cin>>a>>b;

    for(int i=1; i<=b; i++){
        for(int j=i; j<i+a; j++){
            int x=(i+a)-1;
            if(j==x) cout<<j;
            else cout<<j<<" ";
            temp=j;
            if(j==b) break;
        }
        i=temp;
        cout<<endl;
    }

    return 0;
}
