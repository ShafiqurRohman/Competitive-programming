#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the centigrade temperature: ");
    scanf("%f",&c);
    f=(((float)9/5)*c)+32;
    printf("the farrenheit scale temperture is:%.2f",f);
    return 0;
}
