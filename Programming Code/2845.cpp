#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,k=0,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        k+=a;
    }
    cout<<k/(n/2)<<endl;
    return 0;
}
