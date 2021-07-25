#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)break;
        printf("1");
        for(i=2;i<=a;i++){printf(" %d",i);}
    printf("\n");}
    return 0;
}
