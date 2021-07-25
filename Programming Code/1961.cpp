#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,j=0;

    cin>>a>>b;
   int ar[b];
    for(int i=0;i<b;i++){
        cin>>c;
        ar[i]=c;
        if(abs(c-a)<=a && ar[i]-ar[i+1]<=a){
            j++;}
    }if(j==b){
    cout<<"YOU WIN"<<endl;
    }
    else
        cout<<"GAME OVER"<<endl;

return 0;}
