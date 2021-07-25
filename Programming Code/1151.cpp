#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,a=0,b=1,d=0;
    scanf("%d",&c);
    printf("0 1");
    for(int i=2;i<c;i++)
    {    d=a+b;
         printf(" %d",d);
         a=b;
         b=d;
         }printf("\n");
    return 0;
}
