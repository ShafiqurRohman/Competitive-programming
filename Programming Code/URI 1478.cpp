#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
  while(cin>>n && n!=0){
    int arr[n+5][n+5];
    for(int i=0;i<n;i++){
        m=i+1;
        for(int j=0;j<=i;j++,m--){
            arr[i][j]=m;
        }
       k=2;
        for(int j=i+1;j<n;j++,k++){
            arr[i][j]=k;
        }
    }
              for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                if(j == 0)cout << setw(3) << arr[i][j];
                else cout << " " << setw(3) << arr[i][j];
            }
            cout << endl;
        }

        cout << endl;
        }

return 0;
}
