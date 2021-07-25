#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs            v.size()
#define ss             s.size()
#define be            v.begin(),v.end()
#define pii             pair<int,int>
#define ll               long long
#define pb             push_back
#define mpp          make_pair
#define Okay        0
const int m = 10 + 10e6;
static int inf = 1e9;
using namespace std;

string fib(string a, string b){
        // to know briefly this code search in document folder - string add.
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        string fs = "";
        int temp = 0;
        for(int i=0;i<a.size();i++){
            if(i < b.size()){
                int x = a[i] - '0';
                int y = b[i] - '0';
                int sum = x+y+temp;
                int sm = sum%10;
                fs += sm+'0';
                temp = 0;
                if(sum > 9)temp = 1;
                if(i == a.size()-1 && temp == 1)fs+='1';

            }
            else {
                int x = a[i] - '0';
                int sum = x+temp;
                int sm = sum%10;
                fs += sm+'0';

                temp = 0;
                if(sum > 9)temp = 1;
                if(i == a.size()-1 && temp == 1)fs+='1';

            }
        }
        reverse(fs.begin(),fs.end());
        return fs;
}


int main(){

map<int,string>mp;
mp[0] = "0";
mp[1] = "1";

for(int i=2;i<=5000;i++){
    mp[i] = fib(mp[i-1],mp[i-2]);//boro stirng ta age pathaitasi.
}
int n;
while(cin>>n){

    cout<<"The Fibonacci number for "<<n<<" is "<<mp[n]<<endl;
    }

    return Okay;
}

