#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,c=1,j;
    double sum=0.0,fcout=0.0;
    cin>>a;
    for(j=1;j<=a;j++){
        double n;
        cin>>n;
        sum+=n;
        cin.ignore();
        string s;
        getline(cin,s);
        int len=s.size();
        for(int i=0;i<len;i++){
                if(s[i]==' '){
                        c++;}
        }
        fcout=fcout+c;

            cout<<"day"<<" "<<j<<":"<<" "<<c<<" "<<"kg"<<endl;

            c=1;
            }
            cout<<fixed<<setprecision(2)<<fcout/a<<" "<<"kg by day"<<endl;
            cout<<"R$"<<" "<<fixed<<setprecision(2)<<sum/a<<" "<<"by day"<<endl;


    return 0;
}
