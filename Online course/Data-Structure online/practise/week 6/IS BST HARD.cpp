#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int, int>
#define int              long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

const int inf = 1e9;
const int cont = 1e18;
using namespace std;

struct Node {
    int key;
    int left;
    int right;

    Node() : key(0), left(-1), right(-1) {}
    Node(int key_, int left_, int right_) : key(key_), left(left_), right(right_) {}
};

vector<int> in_order_traversal(const vector<Node> &tree) {
    std::vector<int> result;
    std::set<int> processed;
    std::stack<int> to_process;
    // Initialize
    processed.insert(-1);
    to_process.push(0);
    while (not to_process.empty()) {
        auto idx = to_process.top();
        if (processed.find(tree[idx].left) != processed.end()) {
            result.push_back(tree[idx].key);
            processed.insert(idx);
            to_process.pop();
            if (tree[idx].right != -1) {
                to_process.push(tree[idx].right);
            }
        } else {
            to_process.push(tree[idx].left);
            if (tree[idx].key == tree[tree[idx].left].key) {
                throw "BinarySearchTreeError";
            }
        }
    }
    return result;
}

bool IsBinarySearchTree(const vector<Node> &tree) {
    // Implement correct algorithm here
    if (tree.empty()) {
        return true;
    }
    std::vector<int> traversed;
    try {
        traversed = in_order_traversal(tree);
    } catch (...) {
        return false;
    }
    vector<int> keys(tree.size());
    for (int i = 0; i < tree.size(); ++i) {
        keys[i] = tree[i].key;
    }
    std::sort(keys.begin(), keys.end());
    return keys == traversed;
}

int32_t main() {
    int nodes;
    cin >> nodes;
    vector<Node> tree;
    for (int i = 0; i < nodes; ++i) {
        int key, left, right;
        cin >> key >> left >> right;
        tree.push_back(Node(key, left, right));
    }
    if (IsBinarySearchTree(tree)) {
        cout << "CORRECT" << endl;
    } else {
        cout << "INCORRECT" << endl;
    }
    return Okay;
}

