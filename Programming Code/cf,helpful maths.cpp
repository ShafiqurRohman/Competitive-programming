#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int x;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
        if(a[i]!='+'){
            x=a[i]-'0';
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());

    cout<<v[0];
    for(int i=1;i<v.size();i++){
        cout<<"+"<<v[i];
    }
    cout<<endl;

return 0;}

