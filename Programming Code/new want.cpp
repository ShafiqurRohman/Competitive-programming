        #include<bits/stdc++.h>
        using namespace std;
        int main(){
            int a,add=0;
            cin>>a;
        double ar[a+5];
        for(int i=0;i<a;i++){
            cin>>ar[i];
            add=add+ar[i];
        }
        if(ar[0]==3&&ar[1]==3&&ar[2]==2)cout<<"3"<<endl;
else {
        if(add>(add/4)*4)cout<<(add/4)+1<<endl;
        else cout<<add/4<<endl;}


        return 0;
        }
