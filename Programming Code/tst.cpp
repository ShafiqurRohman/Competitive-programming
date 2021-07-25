#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        if(0>a)cout<<"Age is not valid, setting age to 0."<<endl;
        for(int i=0;i<4;i+=3){
                if(a+i<13)cout<<"You are young."<<endl;
                        else if(a+i>=13 && a+i<18)cout<<"You are a teenager."<<endl;
                                    else if(a+i>=18)cout<<"You are old."<<endl;
                }
    }
    return 0;
}
