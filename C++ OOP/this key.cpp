#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string a;
        student(string a){
            this -> a = a;
        }
        void display(){
            cout<<a<<endl;
        }
};

int main(){
    student ami("Shafiq");
    ami.display();
}
