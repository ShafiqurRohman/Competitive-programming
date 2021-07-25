#include<stdio.h>
#define stack_max 100
typedef struct {
int top;
int data[stack_max];
}stack;
//stack.top=0;
void push(stack  *s , int val){
      if(s->top < stack_max){
        s->data [s->top]=val;
        s->top=s->top+1;
      }

      else
        printf("The stack is full\n");
}
int pop(stack *s){
    if(s->top==0){
        printf("The stack is empty\n");
        return -1;
    }
    else {
s->top=s->top-1;
return s->data[s->top];
   }
}
int main(){
    stack my_stack;
    my_stack.top=0;
    int val,i;
    for(i=0;i<5;i++){
    scanf("%d",&val);
    push(&my_stack,val);
    }
    for(i=0;i<7;i++){
      printf("%d\n", pop(&my_stack));
    }

return 0;
}
