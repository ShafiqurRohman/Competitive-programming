#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    long long int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k,y,z;
    cin>>y;
    for(z=0;z<y;z++){
            cin>>n;
        long long x=n.size();
    for(k=0;k<x;k++){
        if(n[k]=='1'){
            a=a+2;
        }
        else if(n[k]=='2'){
            b=b+5;
        }
         else if(n[k]=='3'){
            c=c+5;
        }
         else if(n[k]=='4'){
            d=d+4;
        }
         else if(n[k]=='5'){
            e=e+5;
        }
         else if(n[k]=='6'){
            f=f+6;
        }
         else if(n[k]=='7'){
            g=g+3;
        }
         else if(n[k]=='8'){
            h=h+7;
        }
         else if(n[k]=='9'){
            i=i+6;
        }
         else if(n[k]=='0'){
            j=j+6;
        }
    } cout<<a+b+c+d+e+f+g+h+i+j<<" leds"<<endl;
    a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=0;i=0;j=0;
    }
return 0;
}



