    #include<bits/stdc++.h>
    #define dbug printf("I am here\n");
    #define Fast ios_base::sync_with_stdio(false); cin.tie(0);
    #define vs            v.size()
    #define ss             s.size()
    #define be            v.begin(),v.end()
    #define pii             pair<int,int>
    #define ll               long long
    #define ull             unsigned long long
    #define pb             push_back
    #define mpp         make_pair
    #define  Okay        0
    #define pi             3.14159
    using namespace std;

    const int m = 1e6;
    string mp[m];

    string add(string a, string b){

            string c = "";
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());

            int temp = 0;
            for(int i =0;i<a.size();i++){
                if(i<b.size()){
                    int x = a[i] - '0';
                    int y = b[i] - '0';
                    int sum = x+y+temp;
                    int smod = sum%10;
                    c += (smod+'0');
                    temp = 0;
                    if(sum>9)temp = 1;
                    if(i == a.size()-1 && temp == 1)c += '1';
                }
                else {
                    int x = a[i]-'0';
                    int sum = x+temp;
                    int smod = sum%10;
                    c += (smod+'0');
                    temp = 0;
                    if(sum > 9)temp = 1;
                    if(i == a.size()-1 && temp == 1) c += '1';
                }
            }
            reverse(c.begin(),c.end());

            return c;
    }

string solve(int n){

        if(mp[n] != "")return mp[n];

        if(n == 0){
            mp[n] = "1";
            return mp[n];
        }
        if(n == 1){
            mp[n] = "1";
            return mp[n];
        }
        //string a1 = solve(n-1);
        //string a2 = solve(n-2);
        //return mp[n] = add(a1,add(a2,a2));
        return  mp[n] = add(solve(n-1),add(solve(n-2),solve(n-2)));


    }



int main() {

	ll n,c;
	while(cin>>n && n != -1){
            cout<<solve(n)<<endl;
	}



	return Okay;
}


