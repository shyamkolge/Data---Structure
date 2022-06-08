#include <stdio.h>
int queue_data[50],queue_priority[50],front=-1,rare=-1,size=5;

void enqueue(int data,int priority)
{
    if(rare==size-1)
    {
        printf("Queue is full");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rare++;
        queue_data[rare]=data;
        queue_priority[rare]=priority;
    }
}
void dequeue()
{
    int i,max=0,index;
    if(front==-1)
    {
        printf("Queue is empty");
    }
    else
    {
        if(front==rare)
        {
            front=rare=-1;
        }
        else
        {
            for(i=front;i<=rare;i++)
            {
                if(queue_priority[i]>max)
                {
                    max=queue_priority[i];
                    index=i;
                }
            }
            for(i=index;i<=rare;i++)
            {
                queue_priority[i]=queue_priority[i+1];
                queue_data[i]=queue_data[i+1];
            }
            rare=rare-1;
        }
    }
}
void display()
{
    for(int i=front;i<=rare;i++)
    {
        printf("(%d , %d)\n",queue_data[i],queue_priority[i]);     
    }
}
int main()
{
    printf("Before dequeue\n");
    enqueue(10,1);
    enqueue(12,3);
    enqueue(14,2);
    enqueue(19,6);
    enqueue(16,4);
    display();
    printf("After dequeue\n");
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}