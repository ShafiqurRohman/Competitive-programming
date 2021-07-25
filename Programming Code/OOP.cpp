#include<bits/stdc++.h>
using namespace std;

class dokan{
public:
    int food[3] = {200, 400, 200};
    void show(){
        cout<<"serial Item name   prize"<<endl;
        cout<<"1      pizza       200"<<endl;
        cout<<"2      pasta       400"<<endl;
        cout<<"3       coke       200"<<endl;
    }
    void select(int a){
         cout<<"Total bill = "<<food[a-1]<<endl;
    }
    void select(int a, int b){
        cout<<"Total bill = "<<food[a-1]+food[b-1]<<endl;
    }
    void select(int a, int b, int c){
          cout<<"Total bill = "<<food[a-1]+food[b-1]+food[c-1]<<endl;
    }
};

int main(){

    dokan mou;
    mou.show();
    int n;
   while(cin>>n && n){
        if(n == 1){
            int a;
            cin>>a;
            mou.select(a);
        }
        if(n == 2){
            int a, b;
            cin>>a>>b;
            mou.select(a, b);
        }
        if(n == 3){
            int a, b,c;
            cin>>a>>b>>c;
            mou.select(a,b,c);
        }
   }

    return 0;
}
