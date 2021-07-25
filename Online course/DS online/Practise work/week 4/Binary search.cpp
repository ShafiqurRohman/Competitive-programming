#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define ss              s.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define ll                long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

static ll int inf = 1e9;
using namespace std;

vector<int>v;

int binarySearch(int a, int low,int high ){
    if(low>high)return -1;
    int mid = low +(high-low)/2;
    if(v[mid] == a)return mid;

    if( v[mid] < a) low = mid+1;
    else high = mid-1;
    return binarySearch(a, low, high);
}

int main(){
    int n;
    cin>>n;
    int a;
    for(int i = 0; i<n; i++){
        cin>>a;
        v.pb(a);
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>a;
        cout<<binarySearch(a,0, n-1)<<" ";
    }
    cout<<endl;

    return Okay;
}
