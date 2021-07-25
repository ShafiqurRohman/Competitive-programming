    #include<bits/stdc++.h>
    using namespace std;
    linearsearch(int arr[],int n,int a){
           for(int i=0;i<n;i++){
            if(arr[i]==a)return i+1;
           }
           return -1;

    }
    int main(){
       int n,a;
       scanf("%d",&n);
       int arr[n+5];
       for(int i=0;i<n;i++){
        scanf("%i",&arr[i]);
       }
       scanf("%i",&a);
       printf("%d",linearsearch(arr,n,a));

        return 0;
    }
