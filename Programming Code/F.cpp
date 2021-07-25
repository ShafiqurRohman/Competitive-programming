#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs           v.size()
#define sot(v)       sort(v.begin(),v.end())
#define all(v)       (v).begin(), (v).end()
#define rev(v)       reverse(v.begin(),v.end())
#define yes          cout<<"Yes"<<endl
#define no           cout<<"No"<<endl
#define ii           pair<int, int>
#define int          long long
#define ull          unsigned long long
#define pb           push_back
#define mpp          make_pair
#define Okay         0
#define pi           3.14159

const int mx = 1e6;
const int inf = 1e18;
const int mod = 1e9+7;
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int data){
        if(root == NULL) {
            return new Node(data);
        }else{
            Node* cur;
            if(data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            }else{
                cur = insert(root->right, data);
                root->right = cur;
        }
        return root;
    }
}

int height(Node* root){
       int leftHeight = 0;
       int rightHeight = 0;

       if(root->left != NULL){
            leftHeight = 1+height(root->left);
       }
       if(root->right != NULL){
            rightHeight = 1+height(root->right);
       }
        return max(leftHeight, rightHeight);
}

void solve(){
    Node* root = NULL;
    int t;
    int data;
    cin >> t;
    while(t-- > 0) {
        cin >> data;
        root = insert(root, data);
    }
    int ans = height(root);

  	cout << ans << endl;
}

int32_t main() {
    Fast;
    int tst;
//    cin>>tst;
//    while(tst--)
    solve();
    return Okay;
}

