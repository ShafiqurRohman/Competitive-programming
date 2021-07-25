#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
    node(){
    next = NULL;
    }
};


struct node *create_linklist(int ar[],int asize){

    node *temp = NULL, *head = NULL, *current = NULL;

    for(int i=0;i<asize;i++){
        temp = new node();//eikhaner new function ta malloc er moto kaj kore.
        temp -> data = ar[i];

        if(head == NULL){
            head = temp;
            current = temp;
        }
        else {
            current ->next = temp;
            current = temp;//ekhane  current = current ->next lekkha jabe ..dutai same
        }
    }
    return head;

}

int search_linklist(node*head, int value){
     int  index = 1;
     while(head != NULL){
        if(head-> data == value){
            return index;
        }
        index++;
        head = head->next;
     }
     return -1;

}
int main(){
    node *head;
    int ar[]={12,13,14,15,6};

    head = create_linklist( ar, 5);//ekhane 5 mane array size

// ami ei program e link list e value search korbo.valuta ase ki nei?? janar jonno.
printf("value index number = %d",search_linklist(head,12));//ekane 30 holo searching value

    return 0;
}
