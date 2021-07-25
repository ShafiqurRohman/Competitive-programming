#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,r,c;
    scanf("%d %d",&r,&c);

    int arr[r][c] ,ar[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
             scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
             scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
             printf("%8d ",arr[i][j]+ar[j][i]);
        }
        printf("\n");
    }

    return 0;
}
