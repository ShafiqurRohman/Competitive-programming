#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,a=0;
scanf("%d",&n);

for(i=1; i<n*4; i++)
{
printf("%d ",i);
a++;
if(a==3)
{
printf("PUM\n");
a=0;
i=i+1;
}
}

return 0;
}
