#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
static const long double pi = 3.141592653589793;
using namespace std;

void Isdivisiable(){
    int  m = 0;
    int sum = 0;
    char s;
    while(scanf("%c",&s) && s != '#'){

        sum = 10*m +(s - '0');
        m = sum % 131071;//131071 mane eita dara mode kora lagbe.

    }
    if(m)printf("NO\n");
    else printf("YES\n");

}


int main(){

    while(1){
    Isdivisiable();
    }

    return 0;
}
