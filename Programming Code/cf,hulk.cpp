#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        cout<<"I hate ";
        if(i<a-1){i++;
             cout<<"that I love ";
              if(i<a-1)cout<<"that ";
        }
    }
    cout<<"it"<<endl;

return 0;}
