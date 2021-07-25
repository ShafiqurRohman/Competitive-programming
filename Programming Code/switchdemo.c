#include<stdio.h>
int main()
{
    int x;
    printf("enter a digit:");
    scanf("%d",&x);
    switch(x)
    {
    default:
        printf("the digit %d is out of range",x);
         break;
    case 1:
        printf("the digit is one");
         break;

    case 2:
        printf("the digit is two");
         break;
    case 3:
        printf("the digit is three");
         break;
    case 4:
        printf("the digit is four");
         break;
    case 5:
        printf("the digit is five");
         break;
    case 6:
        printf("the digit is six");
         break;
    case 7:
        printf("the digit is seven");
         break;
    case 8:
        printf("the digit is eight");
        break;
    case 9:
        printf("the digit is nine");
         break;
         case 0:
        printf("the digit is zero");
         break;


    }
    getch();
}
