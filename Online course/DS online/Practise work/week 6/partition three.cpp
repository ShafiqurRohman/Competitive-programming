    #include<bits/stdc++.h>
    #define dbug printf("I am here\n");
    #define Fast ios_base::sync_with_stdio(false); cin.tie(0);
    #define vs            v.size()
    #define ss             s.size()
    #define be            v.begin(),v.end()
    #define pii             pair<int,int>
    #define ll               long long
    #define pb             push_back
    #define mpp         make_pair
    #define Okay        0

using namespace std;

bool subsetSum(int S[], int n, int a, int b, int c){
	if (a == 0 && b == 0 && c == 0)return true;
	if (n < 0)return false;

	bool A = false;
	if (a - S[n] >= 0)A = subsetSum(S, n - 1, a - S[n], b, c);
	bool B = false;
	if (!A && (b - S[n] >= 0))B = subsetSum(S, n - 1, a, b - S[n], c);
	bool C = false;
	if ((!A && !B) && (c - S[n] >= 0))C = subsetSum(S, n - 1, a, b, c - S[n]);

	return A || B || C;
}

bool partition1(int S[], int n){
	if (n < 3)return false;
	int sum = accumulate(S, S + n, 0);
	return !(sum % 3) && subsetSum(S, n - 1, sum/3, sum/3, sum/3);
}

int main(){
    int n;
    cin>>n;
	int S[n+5];
	for(int i=0; i<n; i++)cin>>S[i];
	cout<<partition1(S , n)<<endl;

	return Okay;
}

