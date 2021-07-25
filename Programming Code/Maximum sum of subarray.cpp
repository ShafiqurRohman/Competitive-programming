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
vector<int>v;

int Maximum_Sum_Subarray(int n){
	int ans = INT_MIN, sum = 0;

	for(int i = 1;i < n; ++i){	//Check if all are negative
		ans = max(ans,v[i]);
	}
	if(ans<0)return ans;	//if Max < 0 return Max

	ans = 0;
	for(int i = 0; i < n; ++i){
		if(sum + v[i] > 0)sum+=v[i];
		else sum  = 0;
		ans = max(ans,sum);
	}
	return ans;
}

int main(){
    int n;
    cin>>n;
    int a;
    for(int i =0; i<n; i++){
        cin>>a;
        v.pb(a);
    }
    cout<<Maximum_Sum_Subarray(n)<<endl;
    v.clear();

    return Okay;
}
