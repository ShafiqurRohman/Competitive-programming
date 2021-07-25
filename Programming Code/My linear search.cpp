#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,num,c,pos;
    cout<<"Enter a array size: ";
    cin>>a;
    int arr[a];
    cout<<"Give the array number: ";
    for(int i=0;i<a;i++){
       cin>>arr[i];
    }
    cout<<"Enter a number for search=";
    cin>>num;
    for(int j=0;j<a;j++){
        if(arr[j]==num){
            c=1;
            pos=j+1;
            break;
        }
    }
if(c==1)
    cout<<num<<" number position is "<<pos<<endl;
    else
        cout<<"Number is not found"<<endl;

    return 0;
}
