#include<stdio.h>
int main()
{
    int A,B,C;
    sccanf("%d %d %d",&A,&B,&C);
    if(A>B&&A>C)
    {
       printf("%d eh o maior",A);
    }
    else if(B>A&&B>C)
    {
        printf("%d eh o maior",B);

    }
    else
    {
        printf("%d eh o maior",C);
    }
}
