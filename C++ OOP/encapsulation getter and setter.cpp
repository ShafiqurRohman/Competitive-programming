#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        string name;
        int id;
    public:
        void setName(string a, int b){
            name = a;
            id = b;
        }
        string getName(){
            return name;
        }
        int getID(){
            return id;
        }
        void display(){
            cout<<name<<" "<<id<<endl;
        }
};

int main(){
    student ami;
    ami.setName("shafiq", 1);
    ami.display();
    cout<<ami.getID()<<endl;
    cout<<ami.getName();

    return 0;
}
