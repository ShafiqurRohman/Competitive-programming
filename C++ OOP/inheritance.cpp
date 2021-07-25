#include<bits/stdc++.h>
using namespace std;

class person{
    public:
        string name;
        int age;
        void display(){
            cout<<name<<endl;
            cout<<age<<endl;
        }
};

class student : public person{//ei class ta person class er sob access kotre parbe.
    public:
        int id;
        void display2(){
            cout<<id<<endl;
            display();
        }

};

int main(){
    student ami;//student theke ami student and person tuitai class use korte pari.
    ami.name = "Shafiq";
    ami.age = 21;
    ami.id = 01;
    ami.display2();

    person Ami;
    Ami.age = 21;
    Ami.name = "shafiq";
    Ami.display();

    return 0;
}
