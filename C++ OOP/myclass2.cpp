#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        int id;
        double gpa;
        void display(){
            cout<<id<<endl<<gpa<<endl;
        }
};

int main(){

    student shafiq;
    shafiq.id = 1944655004;
    shafiq.gpa = 4.00;
    shafiq.display();
    cout<<endl;
    student rafi;
    rafi.id = 193040580;
    rafi.gpa = 3.90;
    rafi.display();

    return 0;
}
