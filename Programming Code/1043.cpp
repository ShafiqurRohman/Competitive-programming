#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1,i,j,b;
    cin>>b;
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=3;j++){
            a=a*i;

            cout<<a<<" ";

        }cout<<endl;
        a=1;
    }
    return 0;
}
