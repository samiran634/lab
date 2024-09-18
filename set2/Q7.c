#include <stdio.h>
#include <stdlib.h>
#include<Limits.h>
typedef struct node
{
    int data;
    node *next;
    node *prev;
} node;
typedef struct queue
{
    node *front;
    node *rear;
} queue;
queue *createqueue()
{
    queue *q = malloc(sizeof(queue));
    q->front = q->rear = NULL;
    return q;
}
node *createnode(int data)
{
    node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}
void enQueue(queue *q, int data)
{
    node *new_node = createNode(data);

    if (q->rear == NULL)
    {
        q->front = q->rear = new_node;
        return;
    }
    q->rear->next = new_node;
    q->rear = new_node;
}
int isEmpty(queue *q)
{
    if (q->front == NULL && q->rear == NULL)
    {
        return 1;
    }
    return 0;
}
void dequeue(queue *q)
{

    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
        return;
    }

    node *temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
}
int getFront(queue* q)
{
 
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return INT_MIN;
    }
    return q->front->data;
}

 
int getRear(queue* q)
{
 
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return INT_MIN;
    }
    return q->rear->data;
}
int main()
{
    queue *start;

    return 0;
}