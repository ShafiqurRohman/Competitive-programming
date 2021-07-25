#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node *next;
}*first;

void create_node(node *p,int a){
    p->data = a;
    p->next = NULL;

}


void create_list(node *p,node *q=first){

    if(first==NULL)first=p;
    else{

        if(q->next==NULL)q->next = p;
        else create_list(p, q->next);
    }

}

void display(node *p = first){

    while(p){
        cout << p->data << endl;
       p = p->next;
    }

}





int main(){

    int a,b,c,n;

    cin >> n;

    vector<int> v;
    v.resize(n);


    for(auto &it: v)cin >> it;

    first = new node;
    first = NULL;

    for(int i=0; i<n; i++){
        node *t;
        t = new node;
        create_node(t,v[i]);
        create_list(t);
    }

    display();



    return 0;
}
