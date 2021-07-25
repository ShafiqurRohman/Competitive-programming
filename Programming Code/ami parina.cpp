#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,a,b,i,j;
    cin>>n;
    while(n--){
    cin>>a>>b;
    if(a==1)a++;
    if(a==2)cout<<"2"<<endl<<endl;
     if(a%2==0)a++;
    for(j=a;j<=b;j+=2){
             if(j==2)cout<<"2"<<endl<<endl;
             else if(j==3)cout<<"3"<<endl<<endl;
             else if(j==5)cout<<"5"<<endl<<endl;
             else if(j==7)cout<<"7"<<endl<<endl;

        else{

            if(j%3!=0){
                if(j%5!=0){
                        if(j%7!=0){
        cout<<j<<endl<<endl;}
                }
        }

    }
    }
    }

return 0;}

