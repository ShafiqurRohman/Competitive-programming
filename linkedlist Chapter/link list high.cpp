#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
    node* next;
    node (){
        next = NULL;
    }
};

 node * create_linklist(int ar[], int size){

     struct node *head = NULL,   *temp  = NULL,  *current = NULL;

     for(int i=0; i<size; i++){

        temp = new node();
        temp ->data = ar[i];

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

int main(){

    node * head;
    int ar[] = {1,2 ,3,4,5};

  head =  create_linklist(ar,5);

  while(head != NULL){
    printf("%d -> ",head->data);
    head  =  head->next;
  }
  printf("NULL\n");

return 0;

}

