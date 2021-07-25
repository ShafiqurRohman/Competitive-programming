#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10];
    for(int i=0;i<10;i++){
        cin>>ar[i];
        if(ar[i]<=0)
            ar[i]=1;
            cout<<"X"<<"["<<i<<"]"<<" "<<"="<<" "<<ar[i]<<endl;
            }
    return 0;
}
