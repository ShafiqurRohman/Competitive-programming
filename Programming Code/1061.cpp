#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h;
    char k;
    string i,j;
//    scanf("%c %d",&i,&d);
//    scanf("%d %d %d",&a,&b,&c);
//    scanf("%c %d",&j,&h);
//    scanf("%d %d %d",&e,&f,&g);

    cin>>i>>d;
    cin>>a>>k>>b>>k>>c;
    cin>>j>>h;
    cin>>e>>k>>f>>k>>g;

    int p1=(d*24*3600)+(a*3600)+(b*60)+c;
    int p2=(h*24*3600)+(e*3600)+(f*60)+g;
    if(p2>p1)
    {
        int x=p2-p1;
        int day=x/(3600*24);
        x=x%(3600*24);
        int h=x/3600;
        x=x%3600;
        int m=x/60;
        x=x%60;
        int s=x;
        cout<<day<<" "<<"dia(s)"<<endl;
        cout<<h<<" "<<"hora(s)"<<endl;
        cout<<m<<" "<<"minuto(s)"<<endl;
        cout<<s<<" "<<"segundo(s)"<<endl;

//        printf("%d hora(s)\n",h);
//        printf("%d minuto(s)\n",m);
//        printf("%d segundo(s)\n",s);
//


    }
    else{int x=(30*24*3600)+(p1-p2);
        int day=x/(3600*24);
        x=x%(3600*24);
        int h=x/3600;
        x=x%3600;
        int m=x/60;
        x=x%60;
        int s=x;
         cout<<day<<" "<<"dia(s)"<<endl;
        cout<<h<<" "<<"hora(s)"<<endl;
        cout<<m<<" "<<"minuto(s)"<<endl;
        cout<<s<<" "<<"segundo(s)"<<endl;
//        printf("%d dia(s)\n",day);
//        printf("%d hora(s)\n",h);
//        printf("%d minuto(s)\n",m);
//        printf("%d segundo(s)\n",s);



    }
    return 0;

}

/*
day 5
8 12 23
day 9
6 13 23
*/
