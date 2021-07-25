#include<bits/stdc++.h>

using namespace std;

int main() {
    int b,c;
    double a;

    cin>>a>>b>>c;
    int x=round(a+(a*b/100)+(a*c/100));
    cout<<x<<endl;

    return 0;
}
