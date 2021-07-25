#include<stdio.h>
int main()
{
    float c,f;
    printf("enter the fahrenheit temperature:");
    scanf("%f",&f);
    c=((float)5/9)*(f-32);
    printf("the can tem:%.2f",c);
    return 0;
}
