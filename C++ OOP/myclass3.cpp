#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        int id;
        double gpa;
        void display(){
            cout<<id<<endl<<gpa<<endl;
        }
        void setValue(int x, double y){
            id = x;
            gpa = y;
        }
};

int main(){

    student shafiq;
    shafiq.setValue(1944655004, 4.00);
    shafiq.display();
    cout<<endl;
    student rafi;
    rafi.setValue(194463340, 3.90);
    rafi.display();

    return 0;
}
