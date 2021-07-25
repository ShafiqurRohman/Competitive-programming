#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,x,f;
	int cont;
   while(cin>>a>>b>>c>>d){
		if(a==0)
			break;
		a=a*100;
		b=b*100;
		c=c*100;
		x=0;
		cont=0;
		f=b*d/100;
		while(1)
		{
			cont++;
			x=x+b;
			if(x>a)
				break;
			x=x-c;
			if(x<0)
				break;
			b=b-f;
			if(b<0)
				b=0;
		}
		if(x<0)
			cout<<"failure on day "<<cont<<endl;
		else
            cout<<"success on day "<<cont<<endl;
	}
	return 0;
}
