#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,i,a,k=20;
    cin >> n;
    for(i=0;i<n;i++){
      cin>>a;
      if(a<k){
        k=a;
        b=i+1;}
    }

        cout<<b<<endl;
        b=0;
        return 0;
}

