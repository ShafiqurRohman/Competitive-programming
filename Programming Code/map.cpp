#include<bits/stdc++.h>
using namespace std;
int main(){
   map<string ,int>mp;
   string s;
   while(true){
   cin>>s;
   if(mp[s]>0){
        cout<<"list e ase"<<" "<<mp[s]<<endl;
      mp[s]++;
   }
   else mp[s]++;
   }
   for(auto it:mp){
            printf("%d %d",it.first,it.second);
   }
return 0;
}

