#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,sum=0,j,x,y;
    while(1)
    {
        cin>>a>>b;
        if(a<=0||b<=0)break;

           x=max(a,b);
           y=min(a,b);
           {
               for(j=y;j<=x;j++)
               {
                   cout<<j<<" ";
                    sum=sum+j;
               }
           }cout<<"Sum="<<sum<<endl;
           sum=0;


    }

    return 0;
}
