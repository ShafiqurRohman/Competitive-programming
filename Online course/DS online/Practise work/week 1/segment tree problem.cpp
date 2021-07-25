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
const int m = 10 + 10e6;
static int inf = 1e9;
using namespace std;

ll int ar[m];
struct node {
    ll n = inf;
    ll cnt = 1;
} tree[m * 4];

ll int nc = 1;

void buildTree(ll int n, ll int b, ll int e) {

    if (b == e) {
        tree[n].n = ar[b];
        return ;
    }

    ll mid = (b + e) / 2;
    ll left = n * 2;
    ll right = left + 1;

    buildTree(left, b, mid);
    buildTree(right, mid + 1, e);

    tree[n].n = min(tree[left].n, tree[right].n);

    if (tree[left].n == tree[right].n)
        tree[n].cnt = tree[left].cnt + tree[right].cnt;
    else {
        if(tree[n].n == tree[left].n ) tree[n].cnt = tree[left].cnt;
        else tree[n].cnt = tree[right].cnt;
    }
}

ll query(ll n, ll b, ll e, ll i, ll j) {

    if (i > e || j < b ) {
        return inf;
    }
    if (b >= i && e <= j) {
            nc = tree[n].cnt;
            return tree[n].n;
    }

    ll mid = (b + e) / 2;
    ll left = n * 2;
    ll right = left + 1;

    ll q1 = query(left, b, mid, i, j);
    ll q2 = query(right, mid + 1, e, i, j);
       ll x = min(q1,q2);
        if(q1 == q2){
            nc = tree[left].cnt + tree[right].cnt;
        }
        else{
            if(tree[left].n == x){
                nc = tree[left].cnt;
            }
            else{
                nc = tree[right].cnt;
            }
        }
   return x;
}

void update(int n, int b, int e, int i , int value) {

    if (i < b || i > e) {
        return;
    }
    if (b == e) {
        tree[n].n = value;
        tree[n].cnt = 1;
        return;
    }
    ll int mid = (b + e) / 2;
    ll int left = n * 2;
    ll int right = left + 1;

    update(left, b, mid, i, value);
    update(right, mid + 1, e, i, value);

    tree[n].n = min(tree[left].n, tree[right].n);
    if (tree[left].n == tree[right].n)
        tree[n].cnt = tree[left].cnt + tree[right].cnt;
    else {
        if(tree[n].n == tree[left].n)tree[n].cnt = tree[left].cnt;
        else tree[n].cnt = tree[right].cnt;
    }
}

void print() {
    for (int i = 1; i; i++) {
        if (tree[i].n == inf)break;
        cout << "node " << i << ": " << tree[i].n << " " << tree[i].cnt << "\n";
    } cout << endl;
}

int main() {
    Fast;

    ll int n, m;
    cin >> n >> m;

    for (ll int i = 1 ; i <= n ; i++) {
        cin >> ar[i];
    }

    buildTree(1, 1, n);
   // print();

    ll int k, i, j;
    for (int l = 0; l < m; l++) {
        cin >> k;
        if (k == 2) {
            cin >> i >> j;
            // ll int x = query(1, 1, n, i + 1, j);
            ll ans = query(1, 1, n, i + 1, j);
            cout << ans << " " << nc << endl;
            nc = 1;
        }
        else {
            cin >> i >> j;
            update(1, 1, n, i + 1, j);
          // print();
        }
    }

    return 0;
}

