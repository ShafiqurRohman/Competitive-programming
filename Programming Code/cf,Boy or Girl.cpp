#include<bits/stdc++.h>
using namespace std;
int main(){
   string n;
   set<char>s;
   cin>>n;
   for(int i=0;i<n.size();i++){
   s.insert(n[i]);}
   int x=s.size();
   if(x%2==0)
   cout<<"CHAT WITH HER!"<<endl;
   else
     cout<<"IGNORE HIM!"<<endl;
return 0;
}
