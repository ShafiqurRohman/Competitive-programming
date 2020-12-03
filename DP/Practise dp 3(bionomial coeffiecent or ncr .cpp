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

    const int m = 10e6;
    ll dp[5000][5000];

    ll int solve(ll n, ll c){

       if(dp[n][c] != -1)return dp[n][c];

       if(n == c){
           dp[n][c] = 1;
           return 1;
       }
       if(c == 0){
            dp[n][c] = 1;
            return 1;
       }

       dp[n][c] = solve(n-1,c-1)+solve(n-1,c);

       return dp[n][c];

    }



int main() {

	ll n,c;

	while(cin>>n>>c && n != 0){

            memset(dp, -1, sizeof dp);
            cout<<solve(n,c)<<"\n";
	}



	return Okay;
}

