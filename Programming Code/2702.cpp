#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,e,f,g,x=0,y=0,z=0;
        cin>>a>>b>>c;
        cin>>e>>f>>g;
        int l=e-a;
        if(l>=0)x=x+l;
        int m=f-b;
        if(m>=0)y=y+m;
        int n=g-c;
        if(n>=0)z=z+n;

    cout<<x+y+z<<endl;
return 0;}



