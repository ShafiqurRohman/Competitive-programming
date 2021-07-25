    #include<bits/stdc++.h>
    #define dbug printf("I am here\n");
    #define Fast ios_base::sync_with_stdio(false); cin.tie(0);
    #define vs            v.size()
    #define ss             s.size()
    #define be            v.begin(),v.end()
    #define pii             pair<int,int>
    #define ll               long long
    #define pb             push_back
    #define mpp            make_pair
    using namespace std;

int main(){
   int n,k;
   int tst;
   cin>>tst;
   while(tst--){
   string s;
   cin>>s;

    string temp(s.begin(),s.begin()+(ss/2));

    if(ss % 2 == 0){
           string tt = temp;
           reverse(temp.begin(),temp.end());
           string t = temp;
           string m = tt+t;
           if(s < m){
            cout<<m<<endl;
            continue;
           }
           else reverse(temp.begin(),temp.end());

            if(temp[(ss/2)-1] == '9'){
                    int cnt = 0;
            for(int i =0;i<ss/2;i++)if(temp[i] == '9')cnt++;
                   if(cnt == ss/2){
                    temp = "1";
            for(int i =0;i<(ss/2) -1;i++){
                    temp += '0';
                }
                cout<<temp<<0;
                reverse(temp.begin(),temp.end());
                cout<<temp<<endl;

            }
            else {
                 for (int i = temp.size()-1;  i>=0;  i--) {
                    if (temp[i] == '9')    temp[i] = '0';
        else {
            temp[i]++;
            break;
        }
    }
                cout<<temp;
                reverse(temp.begin(),temp.end());
                cout<<temp<<endl;
            }
            }
       else {

          ++temp[(ss/2)-1];
        cout<<temp;
       reverse(temp.begin(),temp.end());
       cout<<temp<<endl;

           }
      }

    else{

            string tt = temp;
           reverse(temp.begin(),temp.end());
           string t = temp;
           string m = tt+s[ss/2]+t;
           if(s < m){
            cout<<m<<endl;
            continue;
           }
           else reverse(temp.begin(),temp.end());

           if(s[ss/2] == '9'){

            int cnt = 0;
            for(int i =0;i<temp.size();i++) if(temp[i] == '9') cnt++;
            if(cnt == temp.size()){
                temp = '1';
                for(int i =0;i<ss/2;i++){
                    temp += '0';
                }
                string t = temp;
                reverse(temp.begin(),temp.end());
                string tt = temp;
                string m = t+tt;

                    cout<<m<<endl;
                    continue;
            }
            else {
    string temp(s.begin(),s.begin()+(ss/2));
     for (int i=temp.size()-1; i>=0; i--) {
        if (temp[i] == '9')    temp[i] = '0';
        else {
            temp[i]++;
            break;
        }
    }
                string t = temp;
                reverse(temp.begin(),temp.end());
                string tt = temp;
                string m = t+"0"+tt;
                    cout<<m<<endl;
                    continue;

}

           }
         else {
        cout<<temp;
        if(s[ss/2] < s[(ss/2)+1] || s[(ss/2)-1] == s[(ss/2)+1])
            cout<<++s[ss/2];
        else
        cout<<s[ss/2];
        reverse(temp.begin(),temp.end());
        cout<<temp<<endl;
      }
      }
   }
    return 0;

}
