#include<stdio.h>
int main(){
 int a,b,c;
 scanf("%d %d %d",&a,&b,&c);
 if(a>b){
    if(a>c)printf("The largest number %d",a);
    else printf("The largest number %d",c);
 }
 else {
    if(b>c)printf("The largest number %d",b);
    else printf("The largest number %d",c);
 }
    return 0;
}
