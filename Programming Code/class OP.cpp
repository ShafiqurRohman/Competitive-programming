#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        int a;
        int b;
       student (){
            a = 0;
            b = 0;
       }
       void display(){
            cout<<a+b<<endl;
       }
       void setValue(int x, int y){
                a = x ;
                b = y ;
        }

};
int main(){
    student shafiq;
    int x,y;

    cin>>x;
    cin>>y;
    shafiq.setValue(x,y);
    shafiq.display();

    return 0;
}
