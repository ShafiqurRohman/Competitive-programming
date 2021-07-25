#include<bits/stdc++.h>
using namespace std;
int cover(int s){
  int sum=0,r;

  while(s!=0){
  r=s%10;
  sum=sum*10+r;
  s=s/10;
  }
  return sum;

}

int main(){
    int a,cot=1,x,b,l,temp;
    cin>>a;
    temp=a;
    while(true){
        x= cover(temp);
        b=temp+x;
        temp=cover(b);
       if(b!=temp){
            cot++;
            temp=b;
       }
       else{
           cout<<b<<" "<<cot<<endl;
           return 0;
       }
    }
}
