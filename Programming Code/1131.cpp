#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d=0,e=0,l=0,i=0;
    while(cin>>a>>b){
            l++;
            cout<<"Novo grenal (1-sim 2-nao)"<<endl;
            if(a>b)d++;
            else if(a==b)i++;
            else e++;
        cin>>c;
    if(c!=1)break;
    }
    cout<<l<<" grenais"<<endl;
    cout<<"Inter:"<<d<<endl;
    cout<<"Gremio:"<<e<<endl;
     cout<<"Empates:"<<i<<endl;
     if(d==e){
      cout<<"Nao houve vencedor"<<endl;}
      else{
        if(d>e)cout<<"Inter venceu mais"<<endl;
        else cout<<"Gremio venceu mais"<<endl;
      }
return 0;}
