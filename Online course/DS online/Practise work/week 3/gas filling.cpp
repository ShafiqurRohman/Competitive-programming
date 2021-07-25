#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs              v.size()
#define ss              s.size()
#define sot(v)        sort(v.begin(),v.end())
#define rev(v)        reverse(v.begin(),v.end())
#define ii                pair<int,int>
#define ll                long long
#define ull              unsigned long long
#define pb              push_back
#define mpp          make_pair
#define Okay         0
#define pi               3.14159

static ll int inf = 1e9;
using namespace std;

vector<int>v;

int checkfar(int index, int current){
        while(v[index] <= current){
            index++;
        }

        return index-1;
}

int main(){
    Fast;

    int d, can, n,a;
    cin>>d>>can>>n;
    cin>>a;
    v.pb(a);

    if(v[0] > can){
        cout<<"-1"<<endl;
        return 0;
    }

    for(int i = 1; i<n; i++){
        cin>>a;
        v.pb(a);
        if(v[i] - v[i-1] > can){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    if(d - v[n-1] > can){
        cout<<"-1"<<endl;
        return 0;
    }

    // uporer sob gulate sob -1 check kore nilam.

    int current = can;
    int cnt = 0, index = 0;//ekhane index mean gas station.
    while(current < d && index < n){//jotokhno na d te pochai.
        cnt++;//protibare filling station count kori.
        index = checkfar(index, current);//sobcheye farthest filling station berkori.
        current  =  v[index] + can;//bortonman station theke + can jog kore next distance pic kori.
        index++;// index ek kore nei karon porer station theke check kori.

    }
    cout<<cnt<<endl;

    return Okay ;
}

