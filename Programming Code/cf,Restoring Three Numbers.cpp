#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a[3],b,x,y,z;
   for(int i=0;i<3;i++){
        cin>>a[i];
    }cin>>b;
    sort(a,a+3);
     x=abs(a[2]-b);
    y=a[0]-x;
    z=a[1]-x;
    cout<<x<<" "<<y<<" "<<z<<endl;

return  0;}

