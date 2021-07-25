#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    switch(a)
    {
    case 0:
    printf("the number is zero");
    break;
case 1:
    printf("the number is one");
    break;
case 2:
    printf("the number is two");
    break;
case 3:
    printf("the number is three");
    break;
case 4:
    printf("the number is four");
    break;
case 5:
    printf("the number is five");
    break;
case 6:
    printf("the number is six");
    break;
case 7:
    printf("the number is seven");
    break;
case 8:
    printf("the number is eight");
    break;
case 9:
    printf("the number is nine");
    break;
default:
    printf("the number is out of range");
    }
    getch();
}
