#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    while(1)
    {
        if(a==0)break;
        scanf("%d",&a);
        for(i=1;i<=a;i++){
                if(i==a)printf("%d",i);
            else printf("%d ",i);}
    printf("\n");}
    return 0;
}
