    #include<bits/stdc++.h>
    #define ll long long
    #define pb push_back
    #define Fast ios_base::sync_with_stdio(false); cin.tie(0);
    using namespace std;

    int main() {
    ll int a,b,c,d,n,k;
   while(cin>>a>>b>>c>>d){
        if(a == 0 && b == 0 && c == 0&& d == 0)break;
       int dgree = 0;

        if(a<b) dgree += 40-(b-a);
        else dgree += a-b;

        if(b>c) dgree += 40-(b-c);
        else dgree += c-b;

        if(c<d) dgree += 40-(d-c);
        else dgree += c-d;

    cout<<(dgree*9)+1080<<endl;


   }

        return 0;
    }

