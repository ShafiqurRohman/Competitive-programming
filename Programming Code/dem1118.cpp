#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,k=0.0,b;
    int i=0,j=0;
    while(1)
    {
        cin>>a;
        if(a>1&&a<10.1)
        {
            i++;
            cout<<"nota invalida"<<endl;
            k+=a;
            if(i==2)
            {
                cout<<"media = "<<fixed<<setprecision(2)<<k/2<<endl;;
                k=0;
            }
        }
        if(a=1)
            if(a>1&&a<10.1)
             {
            i++;
            cout<<"nota invalida"<<endl;
            k+=a;
            if(i==2)
            {
                cout<<"media = "<<fixed<<setprecision(2)<<k/2<<endl;;

            }if(a=2)break;
        }
    }
    return 0;
}


