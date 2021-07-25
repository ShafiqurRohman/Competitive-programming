#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,j,k=1;
    for(i=0; i<=2; i=i+0.2)
    {
        for(j=1;j<=3;j++){
            k=j;
            k=k+i;
            cout<<"I="<<i<<" "<<"J="<<k<<endl;
//        printf("I=%1.1lf J=%.1lf\n",i,k);
            k=0;
        }

    }
    return 0;
}

