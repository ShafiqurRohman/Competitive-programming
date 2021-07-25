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
const int cont = 1e9+7;
using namespace std;

int heap[100000];

int leftchild(int i){
    return 2*i;//1 base index
}
int rightchild(int i){
    return 2*i +1;//1 base index
}
int parent(int i){
    return i/2;//1 base index
}

void max_heap(int heap_size, int root){
    int max_value_index;
    int left = leftchild(root);
    int right = rightchild(root);
    // ei dape ami left ar root er modde large value er index ber kori.
    if(left <= heap_size && heap[left] > heap[root]){
        max_value_index = left;
    }else{
        max_value_index = root;
    }
    // ei dape ami large value index er shate index er sate right tulona kore max index ber kori.
    if(right <= heap_size && heap[right] > heap[max_value_index]){
        max_value_index = right;
    }
    // root ar max value index jodi ek na hoi taile heap e kono value change hoise
    // tai value change korte hobe and same vabe recursive e change tao check kora lagbe.
    if(root != max_value_index){
        swap(heap[root], heap[max_value_index]);
        max_heap(heap_size, max_value_index);
    }

}

void build_heap(int heap_size){
    for(int i=heap_size/2; i >= 1; i--){
        max_heap(heap_size, i);
    }
}

void heap_sort(int heap_size){
    while(heap_size > 0){
        swap(heap[heap_size--], heap[1]);
        max_heap(heap_size , 1);
    }
}

int popMax(int heap_size){
    cout<<heap[1]<<endl;
    swap(heap[heap_size], heap[1]);//1 base index
    heap_size --;
    max_heap(heap_size, 1);
    return heap_size;
}

int insert_node(int heap_size, int value){
    heap_size ++;
    heap[heap_size] = value;
    int child = heap_size;
    while(child > 1 && heap[parent(child)] < heap[child]){
        swap(heap[child], heap[parent(child)]);
        child = parent(child);
    }
    return heap_size;
}

void solve(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>heap[i];
    }
    build_heap(n);

    n = popMax(n);
    n = popMax(n);

    n = insert_node(n, 100);
    n = insert_node(n, 20);

    for(int i=1; i<=n; i++)cout<<heap[i]<<" ";
    cout<<endl;

    heap_sort(n);
    for(int i=1; i<=n; i++)cout<<heap[i]<<" ";
    cout<<endl;
}

int32_t main(){
    Fast;
    solve();
    return Okay;
}


