#include<stdio.h>
int main()
{
int n,m,i,sum1=0,sum2=0;
    printf("How many number you want: ");


    scanf("%d",&n);
    int  a[n];
    for(i=0;i<n;i++){
        printf("element [%d] = ",i);
        scanf("%d",&a[i]);
    }
    m = n/2;


    for(i=0;i<m;i++){
        sum1 += a[i];
    }
    //ai khane index ta m theke hobe jst
    for(i=m;i<n;i++){
        sum2 += a[i];
    }

    printf("%d %d",sum1,sum2);

}
