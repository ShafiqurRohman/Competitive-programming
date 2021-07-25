    #include<bits/stdc++.h>
    using namespace std;
    int main() {
     int n;
     cin>>n;
     int *ar=(int*)malloc(n*(sizeof(n)));
     for(int i=0;i<n;i++){
            cin>>ar[i];
      // scanf("%d",ar+i);
     }
    for(int i=0;i<n;i++){
            cout<<ar[i]<<endl;
     // printf("%d",*ar+i);
    }
            return 0;
          }


