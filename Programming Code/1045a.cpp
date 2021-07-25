#include<bits/stdc++.h>
using namespace std;
int main()
{
     double a,b,c,x,y,z;
    scanf("%lf %lf %lf",&x,&y,&z);
    a=max(x,y);
    a=max(a,z);
    c=min(x,y);
    c=min(c,z);
    if(a==x&&c==y)
        b=z;
    else if(a==y&&c==z)
        b=x;
    else
        b=y;
    if(a,b,c>0)
    {



        if(a>=(b + c))
            printf("NAO FORMA TRIANGULO\n");
            else{

        if((a*a)==((b*b)+(c*c)))
            printf("TRIANGULO RETANGULO\n");

        if((a*a)>((b*b)+(c*c)))
            printf("TRIANGULO OBTUSANGULO\n");

        if((a*a)<((b*b)+(c*c)))
            printf("TRIANGULO ACUTANGULO\n");

        if(a==b&&b==c)
            printf("TRIANGULO EQUILATERO\n");


        else if(a==b||b==c||a==c)
            printf("TRIANGULO ISOSCELES\n");}


    }



    return 0;
}
