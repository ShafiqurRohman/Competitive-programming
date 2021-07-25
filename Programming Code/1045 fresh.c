#include<stdio.h>
int main()
{
 float a,b,c,x,y,z,tem ;
    scanf("%f %f %f",&x,&y,&z);
    if(x>y)
    {
        tem=x;
        x=y;
        y=tem;
    }
    if(y>z)
    {
        tem=y;
        y=z;
        z=tem;
    }
    if(z>x)
    {
        tem=z;
        z=x;
        x=tem;
    }
    a=x;
    b=y;
    c=z;
    if(a,b,c>0)
    {


        if(a>=(b + c))
            printf("NAO FORMA TRIANGULO\n");

        else
        {
            if((a*a)==((b*b)+(c*c)))
                printf("TRIANGULO RETANGULO\n");

            if((a*a)>((b*b)+(c*c)))
                printf("TRIANGULO OBTUSANGULO\n");

            if((a*a)<((b*b)+(c*c)))
                printf("TRIANGULO ACUTANGULO\n");

            if(a==b&&b==c)
                printf("TRIANGULO EQUILATERO\n");


             else if(a==b||b==c||a==c)
                printf("TRIANGULO ISOSCELES\n");
        }


    }


    return 0;
}
