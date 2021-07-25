#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,r,sum=0,temp;
    cin>>a;
    temp=a;
    while(temp!=0){
     r=temp%10;
     sum=sum*10+r;
     temp=temp/10;

    }
    if(a==sum)cout<<"Palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;
    return 0;
}


