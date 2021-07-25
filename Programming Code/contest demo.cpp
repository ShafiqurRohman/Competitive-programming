#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n], ar2[n];
    for(int i=0; i<n; i++)cin>>ar[i];
    for(int i=0; i<n; i++)ar2[i] = ar[i];
    reverse(ar2, ar2+n);
    int ans = ar[0], ans2 = ar2[0];
    for(int i=1; i<n; i++){
       ans +=abs(ar[i]-ar[i-1]);
       ar[i-1] = max(ar[i], ar[i-1]);
    }
    ans+=ar[n-1];

    for(int i=1; i<n; i++){
       ans2 +=abs(ar2[i]-ar2[i-1]);
       ar2[i-1] = max(ar2[i], ar2[i-1]);
    }
    ans2+=ar2[n-1];
    cout<<min(ans, ans2)<<endl;
    return 0;
}
