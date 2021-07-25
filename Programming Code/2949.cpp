#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char b;
    int n,c=0,d=0,e=0,f=0,g=0;
    for(int i=1;i<=n;i++){
    cin>>a>>b;
     if(b=='A')c++;
     else if(b=='E')d++;
     else if(b=='H')e++;
     else if(b=='M')f++;
     else if(b=='X')g++;
        }
        cout<<g<<" Hobbit(s)"<<endl;
        cout<<e<<" Humano(s)"<<endl;
        cout<<c<<" Elfo(s)"<<endl;
        cout<<d<<" Anao(s)"<<endl;
        cout<<f<<" Mago(s)"<<endl;
    return 0;
}
