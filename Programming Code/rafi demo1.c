#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



int main()
{
    int sum1=0,sum2=0,i,n,a[1000];
    scanf("%d",&a[n]);

    for(i=0;i<(n/2);i++){
        sum1 += a[i];
    }
    for(i=(n/2);i<n;i++){
        sum2 += a[i];
    }
    printf("1st half: %d\n2nd half: %d",sum1,sum2);
}
