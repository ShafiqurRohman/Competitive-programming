#include <bits/stdc++.h>
#define pf                  printf
#define sf(a)               scanf("%d",&a)
#define sfl(a)              scanf("%lld",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define sffl(a,b)           scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
#define sffff(a,b,c,d)      scanf("%d %d %d %d",&a,&b,&c,&d)
#define sffffl(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sfffff(a,b,c,d,e)   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sfffffl(a,b,c,d,e)  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define sfc(a)              scanf("%c",&a)
#define ms(a,b)             memset(a,b,sizeof(a))
#define pb(a)               push_back(a)
#define db                  double
#define ll                  long long
#define ull                 unsigned long long
#define pii                 pair<int,int>
#define pll                 pair<long,long>
#define ff                  first
#define ss                  second
#define sz(x)               (int)x.size()
#define all(x)              x.begin(),x.end()
#define CIN                 ios_base::sync_with_stdio(0); cin.tie(0)
#define max3(a, b, c)       max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c)       min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define for0(i,n)           for(int i=0;i<n;i++)
#define for1(i,n)           for(int i=1;i<=n;i++)
#define forrev(i,n)         for(int i=n-1; i>=0; i--)
#define forab(i,a,b)        for(int i=a;i<=b;i++)
#define forba(i,b,a)        for(int i=b;i>=a;i--)
#define stlloop(x)          for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define case1(z)            cout<<"Case "<<z<<": "
#define case2(z)            printf("Case %d: ",z)
#define PI                  acos(-1) //3.14159265358979323846264338328
#define valid(tx,ty)        tx>=0 && tx<row && ty>=0 && ty<col
#define intlim              2147483648
#define MAX                 1000006
#define inf                 100000008
using namespace std;
vector <long long int> v;
vector <double> vd;
vector <char> vc;
vector <string> vs;
map <string,int> sm;
map <int,int> mp;
map <char,int>cm;
set <int> st;
#define For(n) for(int i=0; i<n; i++)
#define sort(v) sort(v.begin(),v.end());
#define vecprint(v){for(int i=0; i<v.size(); i++)cout << v[i];}
int string_to_int(string s){
    stringstream x(s);
    double a=0;
     x>>a;
     return a;
     }

        sort(v.begin(), v.end(), [](const string &left, const string &right) {

        if (left.size() != right.size()) {
            return left.size() < right.size();
        }
         else {
            return left < right;
        }

    });

    // same as above
          sort(v.begin(), v.end(), []( string &left,  string &right) {
        if (left.size() != right.size()) {
            return left.size() < right.size();
        }
            return left < right;
    });


long long int gcd(long long int a, long long int b){
    if(a%b==0)return b;
    return gcd(b, a%b);
    }
long long int lcm(long long int a, long long int b){
    return (a/gcd(a, b))*b;
    }
int string_sum(string s){
    int b = 0;
    auto k =s.size();
    for(int j=0; j<k; j++){
            b +=(s[j]-48);
    }
    return b;
    }
long long int factorial(long long int n){
    if (n == 0)return 1;
    return n * factorial(n - 1);
   }

int cnt =0;

void SieveOfEratosthenes(int n=20000000){
    v.push_back(1);
   bool prime[n+1];
  memset(prime, true, sizeof(prime));

    vector <bool>prime(n+1,true);

    for (int p=2; p*p<=n; p++){
       if (prime[p] == true){
             for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=n; p++)
       if (prime[p])
          mp[p]++;
}


int mod(string num, int a){

Initialize result
   int res = 0;

 One by one process all digits of 'num'
   for (int i = 0; i < num.length(); i++)
       res = (res*10 + (int)num[i] - '0') %a;

   return res;
}

vector <int> arr(100,-1);

int fib(int n){

  if(n<=1)return 1;

   if(arr[n]==-1){

      arr[n] = fib(n-1)+fib(n-2);
  }
else return arr[n];

   return arr[n];
}


int arr[1050][1050];

int mx=0;
int LCS(string s, string p)
{
  for(int i=1; i<=s.size(); i++){
         for(int j=1; j<=p.size(); j++){

           if(s[i-1]==p[j-1])
               arr[i][j]=1+arr[i-1][j-1];
           else
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);

       }
    }
   return arr[s.size()][p.size()];
}


void primeFactors(long double n){

    while(fmod(n, 2)==0){
        x++;
       n /= 2;
    }
    h+=x;
    x=0;

   for(int i=3; i<=sqrt(n); i+=2){

        while(fmod(n, i)==0){
           x++;
           n /= i;
      }
        h+=x;
       x=0;

     }

    if(n>2){
        h++;
    }

}
#include <bits/stdc++.h>
using namespace std;
vector <long long int> v;
#define soort(v) sort(v.begin(),v.end())
#define foor(i,n) for(int i=0; i<n; i++)
//#define vecprint(v){for(int i=0; i<v.size(); i++)cout << v[i] << " ";}
int string_to_int(string s){stringstream x(s);double a=0; x>>a; return a;}
long long int gcd(long long int a, long long int b){if(a%b==0)return b;return gcd(b, a%b);}
long long int lcm(long long int a, long long int b){return (a*b)/gcd(a, b);}
int string_sum(string s){int b = 0;auto k =s.size();for(int j=0; j<k; j++){b +=(s[j]-48);}return b;}
long long int factorial(long long int n){if (n == 0)return 1;return n * factorial(n - 1);}

int cnt =0;

void SieveOfEratosthenes(int n=20000000)
{
   // v.push_back(1);

   bool prime[n+1];
   memset(prime, true, sizeof(prime));

    vector <bool>prime(n+1,true);

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=n; p++)
       if (prime[p])
          mp[p]++;
}


vector <int> arr(100,-1);

int fib(int n)
{
    if(n<=1)return 1;

    if(arr[n]==-1)
    {
        arr[n] = fib(n-1)+fib(n-2);
    }
    //else return arr[n];

   return arr[n];
}

set <int>s;
void primeFactors(long double n)
{

    while(fmod(n, 2)==0)
    {
        s.insert(2);
        n /= 2;
    }


    for(int i=3; i<=sqrt(n); i+=2)
    {

        while(fmod(n, i)==0)
        {
            s.insert(i);
            n /= i;
        }

    }

    if(n>2){
       s.insert(n);
    }

}


bool fun(int n,int i){
    bool flag, flag2;

    if(n==0)return true;
    if(i==v.size())return false;

    if(n>=v[i]){
        flag = fun(n-v[i], i);
        if(flag == true)return true;
        else return fun(n, ++i);
    }
    else{
         flag2 = fun(n, ++i);
        return flag2;
    }
    return false;
}

int isprime(long long int N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(long long int i=3; i*i<=N; i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}

int binary(vector<int>&v,int target,int r,int l=0){

    int mid;
    mid = l+((r-l)/2);

    if(l>r)return -1;

    if(v[mid]==target)return mid;
    else if(v[mid]>target){
        r = mid-1;
        return binary(v, target,r,l);
    }
    else{
        l = mid+1;
        return binary(v, target,r,l);
    }

    return -1;

}

int lcs(string s,string p){

    vector<vector<int>>v(s.size()+1,vector<int>(p.size()+1));

    for(int i=1; i<=s.size(); i++){
        for(int j=1; j<=p.size(); j++){

    if(s[i-1]==p[j-1]) v[i][j] = v[i-1][j-1]+1;

    else v[i][j] = max(v[i-1][j], v[i][j-1]);

  }
 }

    return v[s.size()][p.size()];
}


int main(){

    return 0;
}
