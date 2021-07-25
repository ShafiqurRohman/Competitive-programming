#include <bits/stdc++.h>

using namespace std;

int a,b,ar[100];

int main(){
	cin>>a>>b;
	cin>>ar[0];
	for(int i=1; i<b; i++){
		cin>>ar[i];
		if(abs(ar[i]-ar[i-1]) > a){
			cout<<"GAME OVER"<<endl;
			return 0;
		}
	}
	cout<<"YOU WIN"<<endl;
	return 0;}

