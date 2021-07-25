#include<stdio.h>
#define max_size 4
int a[max_size];
int top=-1;
void push(int x){
    if(top==max_size -1){
        printf("Error : Stack is overflow\n");
        return;
    }
    top++;
    a[top]=x;
}
void Pop(){
if(top==-1){
       printf("Error : Stack is empty\n");
        return;
}
top--;
}
int Top(){
  return a[top];
}
int main(){
    int n;
    for(int i=0;i<5;i++){
    scanf("%d",&n);
    push(n);
    }
    printf("%d\n",Top());
    Pop();
    printf("%d\n",Top());
    push(10);
     for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
    Pop();
    }

return 0;
}
