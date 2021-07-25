#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,B,H,W,p,ans,best,x;

    while(cin>>N>>B>>H>>W){
        ans=B+1;

        for(int i=0;i<H;++i){
            cin>>p;
            best=0;

            for(int j=0;j<W;++j){
                cin>>x;
                best=max(best,x);
            }

            if(best>=N)
                ans=min(ans,N*p);
        }

        if(ans>=B+1) cout<<"stay home"<<endl;
        else cout<<ans<<endl;
    }

    return 0;
}
