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
    int ar[100];
    void rvrs(int ar[],int n,int i,bool flag){
        if(n == i && !flag){
            return;
        }
        if(flag && n-i == 1){
            swap(ar[i],ar[n]);
            return;
        }
        swap(ar[n],ar[i]);
        return rvrs(ar,n-1,i+1,flag);

    }

int main(){
  ll int a,b,c,d,n,k;
   int tst;

   cin>>tst;
 //  int ar[tst+5];
   for(int i=0;i<tst;i++){
    cin>>ar[i];
   }
    bool flag = 0;
   if(tst %2 == 0)flag = 1;
    rvrs(ar,tst-1,0,flag);
   for(int i=0;i<tst;i++){
    cout<<ar[i]<<" ";
   }
   cout<<endl;

    return 0;
}
