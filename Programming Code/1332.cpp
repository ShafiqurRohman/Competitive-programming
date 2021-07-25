#include<bits/stdc++.h>
using namespace std;
int main(){
    string b;
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        int n=b.size();
        if(n>3){
            cout<<"3"<<endl;
        }
        else{
            if(b[0]=='o'&&b[1]=='n' ||b[1]=='n'&&b[2]=='e'||b[0]=='o'&&b[2]=='e'){
                cout<<"1"<<endl;
            }
            else  cout<<"2"<<endl;
        }
    }

return 0;
}

