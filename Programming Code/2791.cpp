#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5],j=0;
    for(int i=0;i<4;i++){
      cin>>ar[i];
    }for(int i=0;i<4;i++){
    if(ar[i]>j)
        j=i+1;}
        cout<<j<<endl;
    return 0;
}
