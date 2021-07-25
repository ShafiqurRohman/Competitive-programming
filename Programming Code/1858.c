#include<stdio.h>
int main()
{
    int n,b,i,a,k=20;
   scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&a);
      if(a<k){
        k=a;
        b=i+1;}
    }

        printf("%d\n",b);
        b=0;
        return 0;
}


