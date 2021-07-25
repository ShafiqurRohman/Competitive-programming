#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int one=0,two=0,three=0,cot=0,temp=0;
    cin>>a;
   for(int i=0;i<a;i++){
    cin>>b;
    if(b==1)one++;
  else   if(b==2)two++;
   else  if(b==3)three++;
    else cot++;
   }
   if(one==three){
    cot+=one;
    cot+=(two%2);
    cot+=(two/2);
    cout<<cot<<endl;
    return 0;
   }

  else if(one>three){
    cot+=three;
    one=one -three;
    cot+=two/2;
    two=two%2;
    two+=one/2;
    one=one%2;
    cot+=two/2;
    two=two%2;
    cot+=(one|two);
cout<<cot<<endl;
return 0;
   }
else if(three>one){
    cot+=one;
    three=three-one;
    cot+=two/2;
    two=two%2;
    cot+=(three+two);
    cout<<cot<<endl;
    return 0;
     }

}

