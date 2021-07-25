#include <bits/stdc++.h>
using namespace std;

int main(){
    int aa,bb,c,d,flag1=0,flag2=0;
    cin>>aa>>bb>>c>>d;

    int a=min(aa,bb);
    int b=max(aa,bb);

    int ans1=c-d; //cout<<ans1<<endl;
    int ans2=c+d; //cout<<ans2<<endl;
    if(ans1>=a && ans1<=b) flag1=1;
    if(ans2>=a && ans2<=b) flag2=1;

    if(flag1==1 && flag2==1){
        int ans=abs(ans2-ans1); cout<<"Demo : " << ans<<endl;
        int ab=(b-a);
        int fans=(ab-ans);
        cout<<fans<<endl;
        return 0;
    }

    if(flag1==1 && flag2==0){
        int ans=abs(ans1-a);
        cout<<ans<<endl;
        return 0;
    }

    if(flag1==0 && flag2==1){
        int ans=abs(b-ans2);
        cout<<ans<<endl;
        return 0;
    }

    cout<<abs(b-a)<<endl;


    return 0;
}
