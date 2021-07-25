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

int lcs( int *X, int *Y, int m, int n )  {
    int L[m + 1][n + 1];
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
        if (i == 0 || j == 0)L[i][j] = 0;
        else if (X[i - 1] == Y[j - 1])L[i][j] = L[i - 1][j - 1] + 1;
        else L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }

    return L[m][n];
}

int main(){
    int m,n;
    cin>>m;
    int X[m+5];
    for(int i =0;i<m; i++)cin>>X[i];
    cin>>n;
    int Y[n+5];
    for(int i =0; i<n; i++)cin>>Y[i];
    cout << lcs( X, Y, m, n );

    return Okay;
}

