#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int c=0;
    cin>>a;
        for(int i=0;i<a.size();i++){
            if(a[i]=='H'||a[i]=='Q'||a[i]=='9')c++;
        }
    if(c>0)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
return 0;}

