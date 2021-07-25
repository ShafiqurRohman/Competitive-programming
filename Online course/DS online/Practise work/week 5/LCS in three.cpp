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

int lcs( int *X, int *Y, int *Z, int m, int n, int o )  {
    int L[m + 1][n + 1][o+1];
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
                for(int k =0; k<=o; k++)
                    if (i == 0 || j == 0 || k == 0)L[i][j][k] = 0;
                    else if (X[i - 1] == Y[j - 1] && Z[k-1] == Y[j-1])L[i][j][k] = L[i - 1][j - 1][k-1] + 1;
                    else L[i][j][k] = max(L[i - 1][j][k], max(L[i][j - 1][k], L[i][j][k-1]));
        }
    }

    return L[m][n][o];
}

int main(){
    int m,n,o;
    cin>>m;
    int X[m+5];
    for(int i =0;i<m; i++)cin>>X[i];
    cin>>n;
    int Y[n+5];
    for(int i =0; i<n; i++)cin>>Y[i];
    cin>>o;
    int Z[o+5];
    for(int i=0; i<o; i++)cin>>Z[i];
    cout << lcs( X, Y,Z, m, n,o )<<endl;

    return Okay;
}

