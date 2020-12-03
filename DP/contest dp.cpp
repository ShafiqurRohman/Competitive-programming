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
    static const int m = 10+10e4;
    using namespace std;
    int ar[m],v[m];
    int mem[3000][3000] ;
    int s,n;

    int solve(int i, int w){
            if(i == n or w == 0)return 0;
            if(mem[i][w] != -1)return mem[i][w];
            if((w-ar[i]) >= 0){
                mem[i][w] = max(v[i]+solve(i+1,w-ar[i]),solve(i+1,w));
            }
           else mem[i][w] = solve(i+1,w);
           return mem[i][w];
    }

    int main(){

        memset(mem,-1,sizeof mem);
        cin>>s>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i]>>v[i];
        }
        cout<<solve(0, s)<<endl;

    return 0;
    }

