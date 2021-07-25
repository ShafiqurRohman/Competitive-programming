#include<bits/stdc++.h>
#define dbug printf("I am here\n");
#define Fast ios_base::sync_with_stdio(false); cin.tie(0);
#define vs             v.size()
#define ss             s.size()
#define sot(v)       sort(v.begin(),v.end())
#define pii             pair<int,int>
#define ll               long long
#define ull             unsigned long long
#define pb             push_back
#define mpp          make_pair
#define Okay         0
const int m = 10+10e7;
static ll int inf = 1e18;
using namespace std;

string add(string a, string b){

            string c="";
            reverse(a.begin(),a.end());//eikhane reverse korar karon ami jog korar jonno last index ta je first e pai.
            reverse(b.begin(),b.end());//same ekoi vabe b er jonno o kori.

            int temp = 0;//ei ti declare korar karon duita value er man doser upore gele eikhane rakbo.

            for(int i=0;i<a.length();i++){//eikhane first length porjonto kaj kori.

            if(i<b.length()){//ei khane check korlam je i er man b er length er soman ba besi kina.besi hole duta modde kaj nai.

           int  x=a[i]-'0';//a er i tomo index int korlam.
           int  y=b[i]-'0';//same as b too.

            int sum=x+y+temp; // duita jog korlam.
            int s=sum%10;//tarpor mod kore dekham doser besi kina,hole , oitai notun base jOg korte hobe.
            c+=s+'0';//eikhane ami string kore dilam.
            temp = 0;

            if(sum > 9) temp=1;//doser upore hole ami temp er modde hate 1 kore raklam.
            if(i==a.length()-1 && temp==1)c+='1';//i er index last value hoi taile ami last e 1 barabo.karon amar kache ar value nai jog korar moto.

                }

          else {//jodi string b er index shesh hoiye jay.
               int  x = a[i]-'0';
               int  sum = temp+x;
               int  s=sum%10;
                c+=s+'0';
                temp = 0;
                if(sum>9) temp=1;
                if(i==a.length()-1 && temp==1)c+='1';
                }
            }
            reverse(c.begin(),c.end());

              return c;
    }


int main(){

string a,b;
cin>>a>>b;
//amake ekta kotha mone rakhte hobe sob somoy boro string ta a er modde ar choto ta b er modde pathate hobe.
cout<<add(a,b)<<endl;

    return Okay ;
}
