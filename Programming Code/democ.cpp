#include<bits/stdc++.h>
using namespace std;
struct info{
int roll;
int marks;
string name;
};
bool compare(info a,info b){
if(a.marks==b.marks){
    return a.roll<b.roll;
}
else return a.marks>b.marks;

}
int main(){
   info s[100];
int t;
    cin>>t;
for(int i=0;i<t;i++){
    cin>>s[i].roll>>s[i].name>>s[i].marks;
}
//int i;
   sort(s,s+t,compare);

for(int i=0;i<t;i++){
    cout<<s[i].roll<<"   "<<s[i].name<<"  "<<s[i].marks<<endl;
}

return 0;
}
