#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,m,i=0,j=0;
    while(1)
    {
        cin>>a;
        if(a>0&&a<=10)
        {
            j=j+a;
            i++;

            if(i>1)
                break;
        }
        else
            cout<<"nota invalida"<<endl;
    }
    m=j/2;
    cout<<fixed<<setprecision(2)<<"media = "<<m<<endl;
    return 0;
}
