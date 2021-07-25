#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,k;
    vector<int>v;
    for(int i=0;i<25;i++){
        cin>>a;
        v.push_back(a);
        }
       for(int i=0;i<25;i++){
        if(v[i]==1)k=i+1;
       }
       if(k==13)cout<<"0"<<endl;
       else if(k==1||k==5||k==21||k==25)cout<<"4"<<endl;
       else if(k==2||k==4||k==6||k==10||k==16||k==20||k==22||k==24)cout<<"3"<<endl;
       else if(k==12||k==8||k==18||k==14)cout<<"1"<<endl;
       else cout<<"2"<<endl;
return 0;}
