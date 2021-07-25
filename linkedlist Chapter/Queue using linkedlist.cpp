#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(){
        next = NULL;
        prev = NULL;
    }
};

Node *root = NULL, *tail = NULL;

void QueuePush(int value){
    Node *temp = new Node();
    temp ->data = value;

    if(root == NULL){
        root = temp;
        tail = temp;
        return ;
    }
    else {
        tail ->next = temp;
        temp->prev = tail;
        tail = temp;
        return;
    }
}

void QueuePop(){

    if(root == NULL) {
        cout << "The Queue is empty"<< endl;
    }

    else if(root ->next == NULL){
        root = NULL;
        tail = NULL;
        return ;
    }
    else {
        root = root->next;
        delete (root->prev);
        root->prev = NULL;
    }
}

void print(){
    Node *current = root;
    while(current != NULL){
        cout << current ->data <<endl;
        current = current ->next;
    }
    cout<< endl;
}


int main(){

    for( int i =1; i<=5; i++){
        QueuePush(i);
     }
     print();

      for( int i =1; i<=5; i++){
        QueuePop();
         print();
     }
    QueuePop();

   // QueuePush(5);
    print();

    return 0;
}
