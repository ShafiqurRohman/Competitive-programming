#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define ll                long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

const int inf = 1e9;
const int cont = 1e8;
using namespace std;

int heap[100000];
vector<ii>v;

int leftchild(int i){
    return 2*i;//1 base index
}
int rightchild(int i){
    return 2*i +1;//1 base index
}
int parent(int i){
    return i/2;//1 base index
}

void min_heap(int heap_size, int root){
    int min_value_index;
    int left = leftchild(root);
    int right = rightchild(root);
    if(left <= heap_size && heap[left] < heap[root]){
        min_value_index = left;
    }else{
        min_value_index = root;
    }
    if(right <= heap_size && heap[right] < heap[min_value_index]){
        min_value_index = right;
    }
    if(root != min_value_index){
        v.pb(ii(root, min_value_index));
        swap(heap[root], heap[min_value_index]);
        min_heap(heap_size, min_value_index);
    }

}

void build_heap(int heap_size){
    for(int i=heap_size/2; i >= 1; i--){
        min_heap(heap_size, i);
    }
}


void solve(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>heap[i];
    }
    build_heap(n);

    int len = v.size();
    cout<<len<<endl;
    for(int i=0; i<len; i++)cout<<v[i].first-1<<" "<<v[i].second-1<<endl;
}

int32_t main(){
    Fast;
    solve();
    return Okay;
}

