#include<bits/stdc++.h>
using namespace std;
int cover( long long int  s){
   long long int sum=0,r;

  while(s!=0){
  r=s%10;
  sum=sum*10+r;
  s=s/10;
  }
  return sum;

}

int main(){
    long long int a,x,b,temp,n;
    cin>>n;
    while(n--){
            cin>>a;
    temp=a;
    while(true){
        x= cover(temp);
        b=temp+1;
        temp=cover(b);
       if(b!=temp){
            temp=b;
       }
       else{
           cout<<b<<endl;
           break;
       }
    }
    }
    return 0;
}
