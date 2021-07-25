#include<bits/stdc++.h>
using namespace std;
int main(){
     for(int row=1;row<=39;row++)
        cout<<"-";
     cout<<endl;

   for(int row=34;row<=39;row++){
   for(int col=1;col<=39;col++){
    if(row==1||row==39){
        cout<<"-";}
        else if(col==1){
            cout<<"|";}
             else if(col==39){
            cout<<"|";

    }else cout<<" ";
   }cout<<endl;
   }

return 0;}
