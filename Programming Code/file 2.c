//write a letter and get output the letters form.
#include<stdio.h>
int main()
{
    int lower,upper;
    printf("enter the letter:");
    scanf("%c",&lower);
    upper=toupper(lower);
    lower=tolower(lower);

    printf("the letters capital form=%c\n",upper);
    printf("the letters small form=%c",lower);


}
