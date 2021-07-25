#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node* next;

};

 node * create_linklist(int ar[], int size){

     struct node *head = NULL,   *temp  = NULL,  *current = NULL;

     for(int i=0; i<size; i++){

        temp = (node*)malloc(sizeof(node));
        temp ->data = ar[i];
        temp -> next = NULL;
        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current ->next = temp;
            current = current->next;
            // current = temp;
        }

     }
   return head;

}
int main(){
    node * head;
    int ar[] = {1,2 ,3,4,5};

  head =  create_linklist(ar,5);

  while(head != NULL){   //ei loop ta chalano hoiyeche link list print korar jonno.
    printf("%d -> ",head->data);
    head  =  head->next;
  }
  printf("NULL\n");

return 0;
}
