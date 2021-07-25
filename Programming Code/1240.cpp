#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a,b;
    long long x,z,c=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        x=a.size();
        z=b.size();
        if(x<z)cout<<"nao encaixa"<<endl;
        else{
              int l=x-z;
        for(int i=0;i<z;i++){
            if(a[l+i]==b[i]){
                c++;
            }
        }
                if(c==z){
            cout<<"encaixa"<<endl;}
            else cout<<"nao encaixa"<<endl;
        c=0;}

    }

return 0;}



