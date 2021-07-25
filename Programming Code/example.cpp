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
string rev(string x){
 int n =x.size();
 string res="";
  for(int i=n-1;i>=0;i--){
     res+=x[i];
  }
 return res;

}

int main()
{
 int a,b;
  cin>>a;
  string x = conv(a);
  string y = rev(x);
   b = strTOint(y);
  //x.reverse();
  cout<<x<<" "<<y<<" "<<a+b;


    return 0;
}
