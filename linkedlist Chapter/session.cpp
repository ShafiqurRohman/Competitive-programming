#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    while(b>0){
        int temp = a%b;
        a = b;
        b = temp;
    }
    cout<<a<<endl;
    return 0;
}
