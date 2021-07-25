#include<bits/stdc++.h>
using namespace std;
struct rectangle{
int len,wid,area;
    rectangle(){
     len=0;
     wid=0;
     area=0;
}
 int  getarea(){
area=len*wid;
}

};
int main(){
rectangle rec;
cin>>rec.len>>rec.wid;
rec.getarea();
cout<<rec.area<<endl;

return 0;
}

