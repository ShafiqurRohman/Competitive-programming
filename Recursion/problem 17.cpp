#include<bits/stdc++.h>
using namespace std;

void dilfunction(char *s, int i ,int j){
    if(i >= j){
        return;
    }
    dilfunction(s,i+1,j-1);
     swap(s[i],s[j]);
}
int main(){

    char s[100];
    gets(s);
    string ss = s;
    dilfunction(s,0,strlen(s)-1);
    cout<<ss<<endl<<s<<endl;
    if(ss == s){
        cout<<"Palindrome"<<endl;
    }
    else cout<<"Not Palindrome"<<endl;



    return 0;
}
