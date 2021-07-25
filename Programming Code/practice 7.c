#include<stdio.h>
int main(){
 int a,b,c,n,sum;
 scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d %d %d ",&a,&b,&c);
    sum=a+b+c;
    printf("Sum of the number = %d\n",sum);
}
    return 0;
}
