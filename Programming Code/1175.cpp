#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[20],a=0;
    for(int i=0;i<20;i++){
        cin>>ar[i];
    }
    for(int j=19;j>=0;j--){
        int k=ar[j];
 cout<<"N"<<"["<<a<<"]"<<" "<<"="<<" "<<k<<endl;
 a++;}

    return 0;
}
