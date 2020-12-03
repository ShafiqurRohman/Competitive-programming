    #include<bits/stdc++.h>
    #define dbug printf("I am here\n");
    #define Fast ios_base::sync_with_stdio(false); cin.tie(0);
    #define vs            v.size()
    #define ss             s.size()
    #define be            v.begin(),v.end()
    #define pii             pair<int,int>
    #define ll               long long
    #define pb             push_back
    #define mpp            make_pair
    const int m = 10+10e3;
    using namespace std;
    int n,k;
    int ar[m];
    int dp[m][m];

    int dekhi(int i, int n){
        if(n < 0)return -10000;
        if(i==k)return 0;
        if(n == 0 )return 0;

        if(dp[i][n] != -1)return dp[i][n];

        int check1 = ar[i] + dekhi(i+1,n-ar[i]);
        int check2 = 0 + dekhi(i+1,n);
        dp[i][n] = max(check1,check2);
        return dp[i][n];
    }
    int main(){


        int tst;
        cin>>tst;
        while(tst--){

       memset(dp,-1,sizeof dp);

        cin>>n>>k;
        for(int i =0;i<k;i++)cin>>ar[i];
        cout<<dekhi(0,n)<<endl;
        }

    return 0;
    }

