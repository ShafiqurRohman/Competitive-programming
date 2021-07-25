#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,c=0;
  cin>>a;
  int x[a+5];
  for(int i=0;i<a;i++){
    cin>>x[i];
    }
    for(int i=0;i<a;i++){
    for(int j=0;j<a-1;j++){
        if (x[j] > x[j + 1]){
            swap(x[j], x[j + 1]);
            c++;}
    }}
    cout<<"Array is sorted in "<<c<<" swaps."<<endl;

    cout<<"First Element: "<<x[0]<<endl<<"Last Element: "<<x[a-1]<<" "<<endl;
 return 0;
 }
