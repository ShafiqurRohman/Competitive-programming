#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
    node(){
     next = NULL;
     }
};
node *create_linkedlist( int ar[], int asize){

        struct node *head = NULL, *temp = NULL, *current = NULL;

        for(int i=0;i<asize;i++){
            temp = new node();
            temp -> data = ar[i];
            if(head == NULL){
                head = temp;
                current = temp;
            }
            else {
                current -> next = temp;
                current = temp;
            }
        }
        return head;
}
node* reverse_linkedlist(node *head){

     node *current = head, *prev = NULL, *next_node = NULL;
     while(current != NULL){
        next_node = current->next;
         current ->next = prev;//ekhene first current er next ta previous hoise tarpor previous tai puro node hoise.
        prev =  current;
        current = next_node;
     }
     node*head1;
     head1 = prev;

     return head1;
}
int main(){
     node *head,*head2,*head3;

     int ar[]={1,2,3,4,5};

     head =head2=  create_linkedlist(ar,5);

     while(head != NULL){
        printf("%d -> ", head->data );
        head = head->next;
     }
     cout<<"NULL"<<endl;

     //reverse kore head3 te store kori.
     head3 = reverse_linkedlist(head2);
    //ekhon print kore dekhi.
        while(head3 != NULL){
        printf("%d -> ", head3->data);
        head3 = head3->next;
     }
     cout<<"NULL"<<endl;

return 0;
}
