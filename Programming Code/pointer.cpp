#include<bits/stdc++.h>
using namespace std;
void call_by_referance(int *x){
*x=*x+100;
}

int main(){

        int a;
        cin>>a;
        call_by_referance(&a);
        cout<<a<<endl;

return 0;
}
