#include<stdio.h>
int main()
{
    int x;
    printf("the temperature menu\n");
    printf("1.convert fahrenheit to celsius\n");
    printf("2.convert celsius to fahrenheit\n");
    printf("enter a choice:");
    scanf("%d",&x);
    float temp,conver;
    switch(x)
    {
        case 1:
       {
            printf("enter the fahrenheit temperature:");
            scanf("%f",&temp);
            conver=(temp-32)/1.8;
            printf("the celsius value is:%.2f",conver);
            break;
       }
        case 2:
            {
                printf("enter the celsius temperature:");
                scanf("%f",&temp);
                conver=(1.8*temp)+32;
                printf("the fahrenheit temperature is:%.2f",conver);        break;
            }
        default:
            printf("this is not mentionable");
    }
    getch();

}
