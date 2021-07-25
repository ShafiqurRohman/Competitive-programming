#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(){
    next = NULL;
    }
};
Node *create_linkedlist(int ar[], int asize){
    Node *current = NULL, *temp = NULL, *head = NULL;

    for(int i=0; i < asize ; i ++){
//            temp = (Node *) malloc(sizeof(Node));
//            temp->next =NULL;
            temp = new Node();
            temp->data = ar[i];
           if(head == NULL){
            head = temp;
            current = temp;
        }
        else {

            current-> next = temp;
            current = temp;
        }
    }

    return head;
}

Node *deleteLinkedNode(Node *head , int position){

    Node *current = head, *temp;

    if(position == 1){
        current = current->next;
        head = current;
        return head;
    }

     int cnt =1;
     while(cnt != position-1){
        current = current->next;
        cnt++;
    }
    temp  = current->next;
    temp = temp->next;

    current->next = temp;

    return head;
}

void printlist(Node *head){
        Node *current = head;
        while(current != NULL){
            cout << current ->data <<endl;
            current = current->next;
        }
}
int main(){

    Node *head;
    int ar[] = {1,2,3,4,5};
    head = create_linkedlist(ar, 5);
    printlist(head);
    cout<<endl<<endl;

   head =  deleteLinkedNode(head , 2);
    printlist(head);

    return 0;
}

