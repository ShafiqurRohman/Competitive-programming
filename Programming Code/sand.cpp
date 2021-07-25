#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>s;//last in first out
    int n;
    string a;
    cin>>n;
    while(n--){
        int l=0;
        cin>>a;
        cin.ignore();
        for(int i=0;  i<a.length();  i++){
               if(a[i]=='<'){
                    s.push(a[i]);
               }
          else  if(!s.empty()&& a[i]=='>'){
                s.pop();
                l++;
            }

        }
            cout<<l<<endl;

    }
    return 0;
}
