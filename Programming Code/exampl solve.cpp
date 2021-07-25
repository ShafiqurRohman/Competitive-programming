#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    bool flag=false;
    cin>>a>>b;
    int x=a.size();
    int y=b.size();


    int j=0,cnt=0;
    for(int i=0; i<x; i++){
        if(a[i]==b[j]){
            cnt++;
            j++;

            if(cnt==y){
                flag=true;
                break;
            }
        }
        else cnt=0,j=0;

    }

    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


return 0;}
