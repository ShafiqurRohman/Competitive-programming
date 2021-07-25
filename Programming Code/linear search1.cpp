#include<bits/stdc++.h>
using namespace std;
int linear (int x){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
       for(int i=0;i<n;i++){
        if(ar[i]==x)
return i;
       }
       return -1;
}
int main(){
    int a;
cin>>a;
cout<<linear(a)<<endl;

return 0;}

