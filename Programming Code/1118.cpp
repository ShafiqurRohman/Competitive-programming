#include<bits/stdc++.h>
using namespace std;
int main()
{
    double k=0.0,b,a;
    int i=0,j=0;

        while(1){
                while(1){
                cin>>b;
                 if(b>=1&&b<=10){
                    k+=b;
                    i++;
                    if(i==2){cout<<"media = "<<fixed<<setprecision(2)<<k/2<<endl;
                    k=0;
                    i=0;
                    break;}}
                    else cout<<"nota invalida"<<endl;}
                    while(1){
                            cout<<"novo calculo (1-sim 2-nao)"<<endl;
                            cin>>a;
                    if(a==1||a==2)break;

                    }
                    if(a==1) continue;
                    else break;
                    }
                return 0;
}

