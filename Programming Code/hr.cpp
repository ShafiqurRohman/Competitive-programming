#include<bits/stdc++.h>

using namespace std;

    int main() {
    vector<int>x;
    int a,n,d,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
    x.push_back(a);}

    cin>>b>>c;
    cin>>d;
    x.erase(x.begin()+(b-1));
    x.erase(x.begin()+(c-1),x.begin()+(d-1));
    cout<<x.size()<<endl;
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;


    return 0;
}
