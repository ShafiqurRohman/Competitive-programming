#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);

const int m = 10e6;
using namespace std;


int main() {

    freopen("sort.in","r",stdin);
   ll int a;
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i =0; i<n; i++){
    cin>>v[i];
   }
   sort(v.begin(), v.end());

   ofstream myfile("xyz.txt");

   for(int i =0; i<n;i++){
    myfile<<v[i]<<" ";
   }
   myfile.close();

       return 0;
}

