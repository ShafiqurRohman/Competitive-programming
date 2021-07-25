#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
     long long ar[61];
     ar[0]=0;
     ar[1]=1;
     for(int i=2;i<61;i++){
        ar[i]=ar[i-2]+ar[i-1];

     }
            cin>>b;
           cout<<ar[b]<<".0"<<endl;


return 0;
}
