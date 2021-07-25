#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 100;
int seg[maxn*4] , arr[maxn];

void build(int x , int l , int r){
    if(l == r){
        seg[x] = arr[l];
        return;
    }
    int mid = ( l + r )/2;
    build(x*2+1 , l , mid);
    build(x*2+2 , mid+1, r);
    seg[x] =( seg[x*2+1] + seg[x*2+2] );
}


void update(int x , int l , int r , int point = 4, int val = 19){
    if(l == r){
        seg[x] = val;
        return;
    }
    int mid = (l + r)/2;
    if(point <= mid){
        update(x*2+1,l,mid,point,val);
    }
    else update(x*2+2,mid+1,r,point,val);
    seg[x] =( seg[x*2+1] + seg[x*2+2] );
}

int query(int x , int l , int r , int lr , int rr){
    if(r < lr or l > rr or l > r)return 1e7;
    if(lr <= l and rr >= r)return seg[x];
    int mid = (l + r)/2;
    return ( query(x*2+1,l,mid,lr,rr) + query(x*2+2,mid+1,r,lr,rr));
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        cin >> n;
        for(int i = 1; i<=n; i++){
            cin >> arr[i];
        }
        build(0 , 1 , n);
        int q; cin >> q;
        while(q--){
            int tp , l , r , val;
            cin >> tp;
            if(tp == 1){
                cin >> l >> r;
                cout << query(0,1,n,l,r) << endl;
            }
            else{
                cin >> l >> val;
                update(0,1,n,l,val);
            }
        }
    }
}
#include<bits/stdc++.h>
#define ll long long
#define SIZE 100010
using namespace std;

ll tree[4*SIZE];
ll lazy[4*SIZE];

void update(int node, int left, int right, int i, int j, int value){

	if(i > right || j < left) return;
	if(left >= i && right <= j) lazy[node] += value;

	else{

		tree[node] += value*(min(j, right) - max(i, left) + 1);
		update(2*node, left, (left+right)/2, i, j, value);
		update(2*node+1, (left+right)/2+1, right, i, j, value);
	}
}

ll query(int node, int left, int right, int i, int j){

	if(i > right || j < left) return 0;

	else  {

		tree[node] += lazy[node]*(right - left + 1);
		if(left != right){

			lazy[2*node] += lazy[node];
			lazy[2*node+1] += lazy[node];
		}
		lazy[node] = 0;

		if(left >= i && right <= j) return tree[node];
		else return query(2*node, left, (left+right)/2, i, j) + query(2*node+1, (left+right)/2+1, right, i, j);
	}
}

int main(){

	int i, j, k;
	int tc, t, n, m, p, q, len, choice, value;
	char ch;
	ll sum;

	scanf("%d", &tc);

	for(t = 1; t <= tc; t++)
	{
		printf("Case %d:\n", t);
		scanf("%d %d", &n, &q);

		memset(lazy, 0, sizeof lazy);
		memset(tree, 0, sizeof tree);

		for(k = 1; k <= q; k++)
		{
			scanf("%d", &choice);

			if(choice == 1)
			{
				scanf("%d %d %d", &i, &j, &value);
				update(1, 0, n - 1, i, j, value);
			}
			else
			{
				scanf("%d %d", &i, &j);
				sum = query(1, 0, n - 1, i, j);
				printf("%lld\n", sum/(j-i+1));
			}
		}
	}

	return 0;
}

