#include<bits/stdc++.h>
using namespace std;
int main()
{
    float b,p=0.00,s;
    for(int i=1;i<=100;i++){
            b=1/(float)i;
            s=p+b;
            p=s;}
            printf("%.2f\n",s);
    return 0;
}
