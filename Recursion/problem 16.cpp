#include<bits/stdc++.h>
using namespace std;
void rev(string s, int i,int n){
   if(i==n){
    cout<<s[i];
    return;
   }
   rev(s,i+1,n);
   cout<<s[i];

}
int main(){
   string s;
    cin>>s;
     rev(s,0,s.size()-1);
    return 0;
}

