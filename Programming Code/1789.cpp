#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,k=-1,b;
    while(scanf("%d",&n) !=EOF){
    for(int i=0;i<n;i++){
      cin>>a;
      if(a>k)
        k=a;

    }
    if(k<10)b=1;
    else if(k>=10&&k<20)b=2;
    else if(k>=20)b=3;
    cout<<b<<endl;
    k=-1;}
    return 0;
}
