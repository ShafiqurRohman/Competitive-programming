//Bismillah hirrahmanir rahim.
#include<bits/stdc++.h>
using namespace std;
void change( string *a ,int x,int y){
    int right=x;
    int left=y;
if(left==right)return ;
char temp;
temp=a->a[right];
a->a[right]=a->a[left];
 a->a[left]=a->a[temp];
return ( string *a ,int x+1,int y-1);
}

int main(){
string a;
cin>>a;
change(&a,0,a.size()-1);

return 0;
}

