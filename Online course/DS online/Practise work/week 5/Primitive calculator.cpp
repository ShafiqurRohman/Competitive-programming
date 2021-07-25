#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define ss               s.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define ll                long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

using namespace std;
const int ll cont = 10e6;
static const ll inf = 1e11;

int dp[1000005];

int solve(int n){
    if(n <= 1)return 0;
    if(dp[n] != -1)return dp[n];
    int res = INT_MAX, sub_res;
    for(int i = 3; i>= 2; i--){
        if(n%i == 0)sub_res = solve(n/i);
        else sub_res = solve(n-1);
        res = min(sub_res+1, res);
        dp[n] = res;
    }
    return res;
}

void print(int n){
    if(n == 1){
        cout << 1 << " ";
        return;
    }

    int r1 = solve(n);
    for(int i = 2; i<=3; i++){
        if( (n % i) == 0 ){
            if(r1 == (1 + solve(n/i))){
                print(n/i);
                cout << n << " ";
                return;
            }
        }
        else{
                if(r1 == (1+solve(n-1))){
                    print(n-1);
                    cout << n << " ";
                    return;
            }
        }
    }
}



int main(){
    Fast;
    int n;
    memset(dp, -1, sizeof dp);
    cin>>n;
    cout<<solve(n)<<endl;
    print(n);
    cout<<endl;

    return Okay ;
}

