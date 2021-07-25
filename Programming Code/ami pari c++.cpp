#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int ,int>mp;
    int a;
    while(cin>>a){
     mp[a]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

return 0;
}
