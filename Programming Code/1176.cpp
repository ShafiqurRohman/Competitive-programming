#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
     long long ar[61];
     ar[0]=0;
     ar[1]=1;
     for(int i=2;i<61;i++){
        ar[i]=ar[i-2]+ar[i-1];

     }
     cin>>a;
    for(int i=0;i<a;i++){
            cin>>b;
           cout<<"Fib("<<b<<")"<<" "<<"="<<" "<<ar[b]<<endl;
     }

return 0;
}



