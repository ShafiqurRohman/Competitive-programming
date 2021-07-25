#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    node(){
        next = NULL;
    }

};


node*create_linkedlist(int ar[], int asize){
    node *temp = NULL, *head = NULL, *current = NULL;
    for(int i=0;i<asize;i++){
        temp = new node();
        temp->data = ar[i];
        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current ->next = temp;
            current = temp;
        }
    }
    return head;

}


node *add_node_atbegin(node *head, int value){
    struct node *temp = new node();;

    temp->data =value;
    temp->next = head;

    head = temp;
    return head;
}


node *add_node_atend(node * head, int value){
    node *temp = NULL, *current = head;

    while(current->next != NULL){
        current = current->next;
    }
    temp = new node();
    temp ->data = value;

    current->next = temp;

    return head;

}


void print(node *head){
    while(head != NULL){
    printf("%d -> ",head->data);
    head = head->next;
 }
 printf("NULL\n");
}


int main(){
    struct node *head, *newhead,*newnode_end;
    int ar[] = {1,2,3,4,5};
    head = create_linkedlist(ar,5);
     print(head);

    // ekhon ami head e ekta node join korbo.
   newhead =  add_node_atbegin(head,100);
    print(newhead);

    // ekhon ami end e ekta node join korabo.
    newnode_end =add_node_atend(head,400);
      print(newnode_end);

return 0;
}
