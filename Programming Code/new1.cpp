#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int a,b,n,x,c=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
            if(a>b){
                    x=a;
                    while(x!=b){
               if(x>=5){x=x-5;c++;}
               else if(x>=2){x=x-2;c++;}
               else {x-1;c++;}
            }
            }
            else if(a<b){
                x=a;
                    while(x!=b){
                if(x<=5){x=x+5;c++;}
               else if(x<=2){x=x+2;c++;}
               else {x+1;c++;}
            }
        }
        else c=0;

        cout<<c<<endl;
        c=0;
    }
return 0;}
