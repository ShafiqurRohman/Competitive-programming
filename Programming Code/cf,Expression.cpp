#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int v[7];
    cin>>a>>b>>c;
    v[0]=a*b*c;
    v[1]=a+(b*c);
    v[2]=c+(b*a);
    v[3]=b+(c*a);
    v[4]=c*(b+a);
//    v[5]=b*(c+a);
    v[5]=a*(b+c);
    v[6]=a+b+c;
    sort(v,v+7);
    cout<<v[6]<<endl;

return 0;}
