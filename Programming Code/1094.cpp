#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x=0,y=0,z=0;
    char b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(b=='C'){
            x=x+a;
        }
        if(b=='R'){
           y=y+a;
        }
        if(b=='S'){
            z=z+a;
        }}
        float total=x+y+z;

        double j=(x*100)/total;
         double k=(y*100)/total;
          double l=(z*100)/total;
          cout<<"Total:"<<" "<<total<<" "<<"cobaias"<<endl;
          cout<<"Total de coelhos:"<<" "<<x<<endl;
//Total de coelhos: 29
           cout<<"Total de ratos:"<<" "<<y<<endl;
//Total de ratos: 40
            cout<<"Total de sapos:"<<" "<<z<<endl;
//Total de sapos: 23
             cout<<"Percentual de coelhos:"<<" "<<fixed<<setprecision(2)<<j<<" "<<"%"<<endl;
//Percentual de coelhos: 31.52 %
            cout<<"Percentual de ratos:"<<" "<<fixed<<setprecision(2)<<k<<" "<<"%"<<endl;
//Percentual de ratos: 43.48 %
            cout<<"Percentual de sapos:"<<" "<<fixed<<setprecision(2)<<l<<" "<<"%"<<endl;
//Percentual de sapos: 25.00 %


    return 0;
}
