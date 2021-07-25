#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        const int addFee;
        const int examFee;
        int mytution;

        student(int x, int y, int z):addFee(x), examFee(y){///x and y are const thats why we use this type;
            mytution = z;///my tution is a normal int thats why it's initialization is in this way.
        }
        void display(){
            cout<<addFee<<" "<<examFee<<" "<<mytution<<endl;
        }
};

int main(){
    student ami(1,2,3);
    ami.display();

    return 0;
}

