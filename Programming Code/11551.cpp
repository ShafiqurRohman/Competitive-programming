#include<bits/stdc++.h>
using namespace std;
int main()
{
    float b,p=1.00,s=0;
    for(int i=1;i<=100;i++){
            s=s+(1/p);
            p++;}
            printf("%.2lf\n",s);
    return 0;
}

