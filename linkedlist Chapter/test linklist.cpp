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


void appendMiddle(int position, int value){
    Node *current = root, * extra  = NULL;

    //int cnt = 1;
    while(current != NULL){

        if(current->data == position){

            Node *temp = new Node();
            temp ->data = value;
            extra = current->next;

            temp->prev = current;
            temp->next = extra;

            current->next =temp;
            extra->prev = temp;

            return;
        }
     //   cnt++;
        current = current->next;
    }

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

void deleteNode(int value){
    Node *current = root;

    if(root->data == value ){
        root = root->next;
        root->prev = NULL;
        return ;
    }

    else if(tail->data == value){
        tail = tail->prev;
        tail->next = NULL;
        return;
    }

    else{
            Node *right = NULL, *left = NULL;

        while(current->data != value){
            current = current->next;
        }
        left = current->prev;
        right = current->next;
        delete(current);

        left->next = right;
        right->prev = left;

        return;
    }
}

void print(){
    Node *current = root;
    while(current != NULL){
        cout << current->data << endl;
        current = current ->next;
    }
}

void printReverse(){
    Node *current = tail;

    while(current != NULL){
        cout << current->data << endl;
        current = current->prev;
    }

}

int main(){
    appendLast(1);
    appendLast(2);
    appendLast(3);
    appendLast(4);
    appendLast(5);

    appendFirst(99);
    appendFirst(999);

    appendMiddle(3, 35);

    print();
    cout << endl;

    deleteNode(999);
     print();

    //printReverse();
    return 0;
}

