#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter a integer number:\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("prime number\n");
    else
        printf("Not prime number\n");
    return 0;
}
