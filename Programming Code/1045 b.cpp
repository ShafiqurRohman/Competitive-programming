#include <bits/stdc++.h>
using namespace std;

int main(){
    double ar[3],ans,a,b,c;
    for(int i=0; i<3; i++){
        cin>>ar[i];
    }

    double x=max(ar[0],ar[1]);
        x=max(x,ar[2]);

    double y=min(ar[0],ar[1]);
        y=min(y,ar[2]);

    for(int i=0; i<3; i++){
        if(ar[i]!=x && ar[i]!=y) ans=ar[i];
    }
    x=a;
    ans=b;
    y=c;

 if(a >= (b + c)){
  cout << "NAO FORMA TRIANGULO" << endl;
 }else{

  if(a*a == (b*b + c*c)){
   cout << "TRIANGULO RETANGULO" << endl;
  }else if(a*a > (b*b + c*c)){
   cout << "TRIANGULO OBTUSANGULO" << endl;
  }else{
   cout << "TRIANGULO ACUTANGULO" << endl;
  }

  if(a == b && b == c){
   cout << "TRIANGULO EQUILATERO" << endl;
  }

 else if((a == b) || (b == c ) || (c == a)){
   cout << "TRIANGULO ISOSCELES" << endl;
  }
  return 0;
 }

