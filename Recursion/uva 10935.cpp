    #include<bits/stdc++.h>
    #define dbug printf("I am here\n");
    #define Fast ios_base::sync_with_stdio(false); cin.tie(0);
    #define vs            v.size()
    #define ss             s.size()
    #define be            v.begin(),v.end()
    #define pii             pair<int,int>
    #define ll               long long
    #define pb             push_back
    #define mpp            make_pair
    using namespace std;


int main(){

  ll int a,b,c,d,n,k;
   int tst;
    while(cin>>n && n != 0){
            queue<int>q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    cout<<"Discarded cards:";
    while(q.size()>1){
        cout<<" "<<q.front();
        q.pop();
        if(q.size()>1)cout<<",";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
    cout<<"Remaining card: "<<q.front()<<endl;
    q.pop();
}
    return 0;
}

