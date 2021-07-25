#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,p1,p2,res,hour,mi;
    cin>>a>>b>>c>>d;

    p1=a*60+b;
    p2=c*60+d;

    //res=p2-p1;

    if(p1<p2){
    int total_min=p2-p1;
     hour=total_min/60;
        mi=total_min%60;
    //ekhon total mins ke hour ar min e convert kore print korbo
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,mi);
}
else { // tarmane p1 boro...ekhon p1 boro hobe jodi p2 porer diner hoi
    p2=p2+24*60; //24 hour add kore dilam jeno p2 boro hoi
    int total_min=p2-p1;
    hour=total_min/60;
        mi=total_min%60;
    //ekhon total mins ke hour ar min e convert kore print korbo
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,mi);
}

return 0;
}
