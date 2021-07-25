#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n &&n!=0){
        int  arr[n+5][n+5];
        int x=(n+1)/2;
        int a=0,b=n,m=1;
       // cout<<a<<b<<endl;
        for(int i=1;i<=x;i++){//ei problem e layer onujai korbo..ek ek kore barabo.
            for(int j=a;j<b;j++){//prothome sob value ke 1 kobo.pore porer layer e 1 kore barabo.
                for(int k=a;k<b;k++){
                         //cout<<a<<b<<m<<endl;
                    arr[j][k]=i;
                }
            }
                    a++;
                    b--;
        }
         for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                if(j == 0)
                    cout << setw(3) << arr[i][j];
                else
                    cout << " " << setw(3) << arr[i][j];
            }
            cout << endl;
        }

        cout << endl;
    }

return 0;
}

