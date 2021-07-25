#include<bits/stdc++.h>
using namespace std;
int main()
{
    float s=0,j=1.00;
    for(int i=1;i<=39;i=i+2){
            s=s+(i/j);
            j=(j*2);
            }
            printf("%.2f\n",s);
    return 0;
}
