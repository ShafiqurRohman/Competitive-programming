#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int a,b,c,i,j,k,l,n,m;
	int ar[1000],br[100];
	while(scanf("%d %d",&n,&m)!=EOF){

		for(i=0;i<m;i++)
		cin>>ar[i];
		c=0;
		l=0;
		for(j=1;j<=n;j++){
			c=1;
			for(i=0;i<m;i++){
				if(ar[i]==j){
				c=0;
				l++;
				break;
				}
			}
			if(c==1)
			cout<<j<<" ";
		}
		if(l==n){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
