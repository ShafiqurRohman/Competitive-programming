#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

bool amipari(long long int num)
{
    if (num <=1)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;

        int upper =sqrt(num) +1;

        while (divisor <= upper)
        {
            if (num % divisor == 0)
                return false;
            divisor +=2;
        }
        return prime;
    }
}

 int main()
 {int a,b,i,n,j;
 cin>>n;

 for(i=0;i<n;i++)
 {
  cin>>a>>b;

  for(j=a;j<=b;j++)
  {            if(amipari(j))
     cout<<j<<endl;

  }
 }
 return 0;
 }
