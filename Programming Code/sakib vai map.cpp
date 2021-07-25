#include<bits/stdc++.h>
using namespace std;
int linear_search(int ar[],int a,int n){
     int i;
for(i=0;i<n;i++){
    if(ar[i]==a)
        return i;
}
    i=-1;
return i;
}
int main(){
    int a,b,n;
    cin>>n;
   int  ar[n+5];
   for(int i=0;i<n;i++){
    cin>>ar[i];
   }
   cin>>b;
   cout<<linear_search(ar[1],b,n)<<endl;
return 0;
}
