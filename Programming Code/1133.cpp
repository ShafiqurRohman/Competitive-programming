#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j;
    cin>>a>>b;
    if(a>b){
    for(i=b+1;i<a;i++)
    {
        if((i%5==2)||(i%5==3)){
           j=i;
           cout<<j<<endl;}
    }}
    else{
    for(i=a+1;i<b;i++)
    {
        if((i%5==2)||(i%5==3)){
           j=i;
           cout<<j<<endl;}}}
    return 0;
}
