// queue te first in first out hoy.so amader first ar last bujte hobe.
#include <stdio.h>
#define mx 5// eikhane mx shubida moto nite paro;

typedef struct{
int data[mx+1];
int first,last;
}queue;

void enqueue(queue *q, int val){
      if((q->last+1)%(mx+1)==q->first){
        printf("Queue is full\n");
        return ;
      }
      q->data[q->last]=val;
      q->last = (q->last+1) % (mx+1);
}

int dequeue(queue *q){
   int val;
   if(q->first == q->last){
    printf("queue is empty\n");
    return -1;
   }
   val=q->data[q->first];
   q->first = ((q->first+1)%(mx+1));
   return val;
}


int main() {
queue myq;
int a,x;
myq.first=0;
myq.last=0;
scanf("%d",&a);
for(int i=0;i<a;i++){
    scanf("%i",&x);
    enqueue(&myq , x);
}
for(int i=0;i<a;i++){
 printf("%i\n",  dequeue(&myq ));
}


    return 0;
}
