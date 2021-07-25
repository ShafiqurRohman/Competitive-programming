#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter three number:");
    scanf("%d %d %d",&x,&y,&z);
    if((x>y)&&(x>z))
        printf("the largest number is:%d\n",x);
    else if((x>!y)&&(y>z))
        printf("the largest number is:%d",y);
    else if(z>x&&z>y)
        printf("the largest number is:%d",z);
        else
            printf("the numbers are equal");
    return 0;
}
