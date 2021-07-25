#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        int id;
        double gpa;
        void display(){
            cout<<id<<endl<<gpa<<endl;
        }
        student(int x, double y){
            id = x;
            gpa = y;
        }
        student(){
            cout<<"This is default"<<endl;
        }
};

int main(){

    student ob;
    student shafiq(1944655004, 4.00);
    shafiq.display();

    student rafi{194463340, 3.90};
    rafi.display();

    return 0;
}
