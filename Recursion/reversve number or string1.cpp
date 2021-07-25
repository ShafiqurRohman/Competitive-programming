    #include<bits/stdc++.h>
    #define dbug printf("I am here\n");
    #define Fast ios_base::sync_with_stdio(false); cin.tie(0);
    #define vs            v.size()
    #define ss             s.size()
    #define be            v.begin(),v.end()
    #define pii             pair<int,int>
    #define ll               long long
    #define pb             push_back
    #define mpp          make_pair
    using namespace std;

    void rvrs(int ar[] ,int n,int i){

        if(i<n){
            rvrs(ar,n,i+1);
        }
        cout<<ar[i]<<" ";
        return ;
    }

int main(){
  ll int a,b,c,d,n,k;
   int tst;

   cin>>tst;
   int ar[tst+5];
   for(int i=0;i<tst;i++){
    cin>>ar[i];
   }
    rvrs(ar,tst-1,0);

    return 0;
}
