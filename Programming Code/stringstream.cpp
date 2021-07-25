#include <bits/stdc++.h>
using namespace std;

string conv(int x){
   stringstream ss;
    ss << x;
    string s = ss.str();
    return s;
}

int strTOint(string s){
    int a;
    stringstream ss(s);
    ss >> a;
    return a;
}




int main(){
    int a;
    //cin>>a;
    string b;
    cin>>b;
string s = conv(a);

int n = strTOint(b);
cout<<n<<endl;

   // cout<<s<<endl;

    return 0;
}
