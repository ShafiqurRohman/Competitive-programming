#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
     Node *next;
    Node *prev;
    Node(){
        prev = NULL;
        next = NULL;
    }
};

    Node *root = NULL , *tail  =  NULL;

void StackPush(int value){
    Node *temp = new Node();
    temp ->data = value;

    if( root == NULL){
        root = temp;
        tail = temp;
    }
    else{
        tail ->next = temp;
        temp ->prev = tail;
        tail = temp;
    }

}

void StackPop(){

    if(tail == NULL){
        cout << "The Stack is empty" << endl;
        return;
    }
   else if( tail ->prev== NULL){
        root = NULL;
        tail = NULL;
        return;
    }
    else{
        tail = tail ->prev;
        delete(tail->next);
        tail->next = NULL;
        return;
    }

}

void print(){
    Node *current = tail;
    while(current != NULL){
        cout<<current ->data <<endl;
        current = current ->prev;
    }
    cout<<endl;
}


int main(){

     for( int i =1; i<=5; i++){
        StackPush(i);
     }
     print();

      for( int i =1; i<=5; i++){
        StackPop();
     }
    StackPop();

    StackPush(5);
    print();

    return 0;
}
