#include <stdio.h>

 int queue[5];
 int front=-1,rare=-1;

 void enqueue(int val)
 {
 if(rare == 4)
 {
 printf("queue overflow\n");
 }
else
{
 if(front == -1)
 {
 front=0;
 }
 rare++;
 queue[rare]=val;
 printf("%d is enqueued\n",val);
}
}



 void dequeue()
 {
 if(front == -1)
 {
 printf("queue is underflow\n");
 }
 else
 {
 printf("%d is dequeued\n",queue[front]);
 front++;
 if(front>rare)
 {
 front=rare=-1;
 }
 }
 }


 void display()
 {
 if(front==-1)
 {
 printf("Any element is not present in the queue to display,Queue is empty\n");
 }
 else
 {
 for(int i=front;i<=rare;i++)
 {
 printf("%d\t",queue[i]);
 }
 printf("\n\n");
 }
 }



 int main()
 {
 enqueue(6);
 enqueue(7);
 enqueue(2);
 enqueue(34);
 enqueue(78);
 display();
 // enqueue(0);
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 display();
 //dequeue();
 return 0;
 }