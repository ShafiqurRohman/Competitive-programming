#include<stdio.h>
int main()
{
    int x;
    printf("enter any year:");
    scanf("%d",&x);
    if(x%400==0)
        printf("the year %d is leap year",x);
    else if(x%4==0&&x%100!=0)
        printf("the year %d is leap year",x);
    else
        printf("the year %d isnot leap year",x);
    getch();
}
