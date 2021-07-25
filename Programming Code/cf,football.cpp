#include <bits/stdc++.h>
using namespace std;

int main() {
    int c=0,d=0,k=0;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1'){
            c++;
            if(c==7)k++;
        }
        else c=0;

        if(a[i]=='0'){
                d++;
        if(d==7)k++;
        }
        else d=0;

    }
    if(k>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

