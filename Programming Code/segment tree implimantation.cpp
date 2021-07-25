void build(int node, int l , int r){
    if(l == r){
        seg[node] = arr[l];
        return;
    }
    int mid = ( l + r )/2;
    int left = node*2+1;
    int right = left+1;
    build(left, l , mid);
    build(right , mid+1, r);
    seg[node] =( seg[left] + seg[right] );
}

int query(int node_label, int node_begin, int node_end, int range_begin, int range_end){
    if(node_begin>range_end || node_end<range_begin) return 0;
    if(node_begin>=range_begin && node_end<=range_end) return tree[node];
    int left_node_label = node_label*2;
    int right_node_label = node_label*2+1;
    int mid = (node_begin+node_end)/2;
    return query(left_node_label, node_begin, mid, range_begin, range_end)
            + query(right_node_label, mid+1, node_end, range_begin, range_end);
}

int main(){

    query(1, 1, n, l, r);
    build(1,1,n);
}
