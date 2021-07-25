    //Bismillahhir Rahminir Rohim
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
    ll int a,b,c,k;
    cin>>a>>b>>k;
   vector<ll int>ar(a+1),arr(b+1);
   ll int v,sum = 0;

    for(int i =1;i<=a;i++){
        cin>>v;
        sum += v;
        ar[i] = sum;
    }
    sum = 0;
    for(int i =1;i<=b;i++){
        cin>>v;
        sum += v;
        arr[i] = sum;
    }

    ll int j = b,ans = 0;
    for(int i=0; i<=a; i++){
        if(ar[i] > k)break;
        while((ar[i]+arr[j]) > k){
                j--;
                cout<<j<<endl;
        }
         ans = max(ans,i+j);
    }
    cout<<ans<<endl;

    return 0;
    }
