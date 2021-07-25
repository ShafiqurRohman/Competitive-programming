#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        if(b<=8000)
            cout<<"Inseto!"<<endl;
        else
           cout<<"Mais de 8000!"<<endl;
    }

 return 0;
}
