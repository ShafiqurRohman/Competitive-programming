#include<stdio.h>
int main()
{
    char name[30];
    gets(name);
    double A,B,SALARY;
    scanf("%lf %lf",&A,&B);
    SALARY=A+((B*15)/100);
    printf("TOTAL = R$ %.2f\n",SALARY);
    return 0;
}
