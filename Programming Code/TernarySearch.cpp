#include<bits/stdc++.h>
using namespace std;

const int m = 10e6;
int ar[m];


int ternarySearch(int left , int right , int value){

    if(right - left > 0){
            int midFirst = left +(right-left)/3;
            int midSecond = midFirst + (right - left)/3;

            if(ar[midFirst] == value){
                return midFirst;
            }
            if(ar[midSecond] == value){
                return midSecond;
            }

            if(value < ar[midFirst]){
                return ternarySearch(left, midFirst,value);
            }
            if(value > ar[midSecond]){
                return ternarySearch(midSecond+1,right,value);
            }
           return ternarySearch(midFirst,midSecond,value);
    }

     return -1;

}


int main(){

    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>ar[i];
    }
    int q;
    cin>>q;
    for(int i =0; i<q; i++){
        int a;
        cin>>a;
        int ans = ternarySearch(0,n,a);
        if(ans != -1){
            cout<<a<<" is found at "<<ans<<" position"<<endl;
        }
        else cout<<"Not found"<<endl;
    }


    return 0;
}
