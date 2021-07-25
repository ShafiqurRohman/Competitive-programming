#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(){
        prev = NULL;
        next = NULL;
    }
};

Node* head = NULL, *tail = NULL ;

void appendLast(int value){
    Node *temp = new Node();
    temp->data = value;
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void appendFirst(int value){
    Node *temp = new Node();
    temp->data = value;
    if(head == NULL){
        head = temp;
        tail = temp;
    }
    else{
        head->prev = temp;
        temp ->next = head;
        head = temp;
    }
}

void print(){
    Node *current = head;
    while(current != NULL){
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<endl;
}
void printReverse(){
    Node *current = tail;
    while(current != NULL){
        cout<<current->data<<" ";
        current = current->prev;
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        appendLast(i);
    }
    appendFirst(2);
    appendFirst(100);
    print();
    printReverse();
    return 0;
}
