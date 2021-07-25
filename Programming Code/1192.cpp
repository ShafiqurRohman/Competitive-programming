#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,c,n;
    char b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
         if(a==c) cout<<c*a<<endl;
       else if(b>='A'&&b<='Z'){
                 cout<<c-a<<endl;
        }
        else if(b>='a'&&b<='z'){
          cout<<a+c<<endl;
        }
        else
        cout<<c-a<<endl;
    }
return 0;}
