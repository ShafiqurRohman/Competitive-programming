#include<stdio.h>
int main(){
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)x=a;
    else if(b>a && b>c)x=b;
    else x=c;
    if(a>b && a>c)x=a;
    else if(b>a && b>c)x=b;
    else x=c;
    if(a>b && a>c)x=a;
    else if(b>a && b>c)x=b;
    else x=c;


    printf("%d\n%d\n%d",x,y,z);
    return 0;
}
