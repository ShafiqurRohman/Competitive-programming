#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    int m = n-1;
    for(i=1; i<=m; i++){
        for(j=i; j<=m; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
