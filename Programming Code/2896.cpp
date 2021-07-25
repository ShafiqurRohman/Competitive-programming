
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b>>c;
        if(b<c){
            cout<<b<<endl;
        }
        else{
            int x=(b%c)+(b/c);
            cout<<x<<endl;
        }
    }


return 0;
}



