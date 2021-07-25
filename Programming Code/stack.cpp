#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    stack<int>s;
    for(int i=0;i<5;i++){
    cin>>a;
    s.push(a);}
    for(int i=0;i<5;i++){
       cout<<s.top();
       s.pop();
    }
return 0;}
