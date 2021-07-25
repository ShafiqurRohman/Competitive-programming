#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c=0,d=0;
    float avr;
    while(1){
            scanf("%d",&a);
        if(a<0)break;
        else{
            c=a+b;
            b=c;
            d++;
        }
    }
    avr=(float)c/d;
    printf("%.2f\n",avr);
    return 0;
}


