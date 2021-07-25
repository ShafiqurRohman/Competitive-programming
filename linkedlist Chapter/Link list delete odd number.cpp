#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node* prev;
    Node(){
        next = NULL;
        prev = NULL;
    }

};

Node *root = NULL, *tail = NULL;

void appendFirst(int value){
    if(root == NULL){
        root = new Node();
        root->data = value;
        tail = root;
        return;
    }
    Node *temp = new Node();
    temp->data = value;
    root->prev = temp;
    temp->next = root;
    root = temp;

}

void appendLast(int value){
    if(root == NULL){
        root = new Node();
        root->data = value;
        tail = root;
        return;
    }

    Node *temp = new Node();
    temp->data = value;
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void deleteOddNode(){

    Node *current = root;
    while((current->data)%2 != 0 and current != NULL){
            current = current->next;
    }
    root = current;
    root->prev = NULL;
    Node *left = root;
    current = current->next;
    while(current != NULL){
        if((current->data)%2 == 0){
            left -> next = current;
            current ->prev = left;
            left = current;
        }
        current = current->next;
    }
    left->next = NULL;
}

void print(){
    Node *current = root;
    while(current != NULL){
        cout << current->data << endl;
        current = current ->next;
    }
}

int main(){
   for(int i=0; i<10; i++){
        appendLast(i);
   }

    print();
    cout << endl;

    deleteOddNode();
    print();

    return 0;
}
/*
Implementation by Shafiq
*/
