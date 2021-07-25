    #include<bits/stdc++.h>
    using namespace std;

    const int N = 2e5+7;
    int cnt[N];

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);

        int t;
        cin>>t;

        while (t--) {
            int n;
            cin>>n;

            for (int i=1; i<=n; i++)    cnt[i] = 0;

            int dif = 0, mx = 0;
            for (int i=1; i<=n; i++) {
                int x;
                cin>>x;
                cnt[x]++;
                if (cnt[x] == 1)    dif++;
                mx = max(mx, cnt[x]);
            }

            cout<<min(dif, mx) - (mx == dif)<<endl;
        }
    }

