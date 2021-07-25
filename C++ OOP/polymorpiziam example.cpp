#include<bits/stdc++.h>
using namespace std;

class shape{
    public:
        double len;
        double wid;
        shape(double len, double wid){
            this ->len = len;
            this ->wid = wid;
        }
        virtual double area(){
            return 0;
        }

};

class triangle : public shape{

    public:
        triangle(double len, double wid)
        :shape(len,wid)
        {
        }

        double area(){
            return .5*len*wid;
        }

};

class rectangle : public shape{

    public:
        rectangle(double len, double wid)
        :shape(len,wid)
        {
        }

        double area(){
            return len*wid;
        }

};


int main(){
    shape *sh;
    rectangle R(10,20);
    triangle T(10,20);
    cout<<R.area()<<endl;
    cout<<T.area()<<endl;

    sh = &R;
    cout<<sh->area()<<endl;
    sh = &T;
    cout<<sh->area()<<endl;
}

