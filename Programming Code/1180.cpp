#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=1000,c,j=0;
    cin>>a;
    int ar[a];
    for(int i=0; i<a; i++)
    {
        cin>>c;
        ar[i]=c;
        if(ar[i]<b)
        {
            b=ar[i];
            j=i;
        }
    }
    cout<<"Menor"<<" "<<"valor:"<<" "<<b<<endl;
    cout<<"Posicao:"<<" "<<j<<endl;

    return 0;
}


