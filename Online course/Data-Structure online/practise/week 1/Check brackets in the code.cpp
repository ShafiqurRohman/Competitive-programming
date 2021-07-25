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
const int cont = 10e5+10;
using namespace std;

struct node{
    char ch;
    int pos;
    node(char _ch, int _pos){
        ch = _ch;
        pos = _pos;
    }
};

stack<node>st;
void solve(){
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('|| s[i] == '{' || s[i] == '['){
            st.push(node(s[i],i+1));
        }
        else if(s[i] == ')'|| s[i] == '}' || s[i] == ']'){
            if(!st.empty()){
                if(s[i] == ')'){
                    if('(' == st.top().ch){
                        st.pop();
                    }
                    else{
                        cout<<i+1<<endl;
                        return;
                    }
                }
                else if(s[i] == '}'){
                    if('{' == st.top().ch){
                        st.pop();
                    }
                    else{
                        cout<<i+1<<endl;
                        return;
                    }
                }
                else if(s[i] == ']'){
                    if('[' == st.top().ch){
                        st.pop();
                    }
                    else {
                        cout<<i+1<<endl;
                        return;
                    }
                }
            }
        else {
                cout<<i+1<<endl;
                return;
            }
        }
    }
    if(st.empty())cout<<"Success"<<endl;
    else {
        cout<<st.top().pos<<endl;
    }
}

int main(){
    solve();
    return Okay;
}
