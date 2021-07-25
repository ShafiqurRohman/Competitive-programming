#include<bits/stdc++.h>
using namespace std;
void bubble
int main(){
    int n,a,temp;
   int   v[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(v[j]>v[j+1]){
                temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
    }
return 0;
}
