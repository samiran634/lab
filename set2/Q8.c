#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};

struct queue{
    int val;
    struct Node* front;
    struct Node* rear;
    int size;
}queue;

struct queue_arr{
    int q[10];
    int front;
    int rear;
} queue_arr;

void enqueue(int x){
    struct Node* frnt = (struct Node*)malloc(sizeof(struct Node));
    frnt->val = x;
    frnt->next = NULL;
    if(queue.rear != NULL){
        queue.rear->next = frnt;
        queue.rear = queue.rear->next;
        queue.rear->next = queue.front;
    }
    else{
        queue.rear = queue.front = frnt;
    }
    queue.size++;
}

int peek(){
    if(queue.front != NULL){
        return queue.front->val;
    }
    printf("Empty Queue");
    return -1;
}

int dequeue(){
    queue.size--;
    if(queue.front != NULL){
        queue.rear->next = queue.front->next;
        queue.front = queue.front->next;
    }
    else{
        printf("Underflow\n");
        return -1;
    }
    return 0;
}

void enqueue_arr(int x){
    if((queue_arr.rear + 1) % 10 == queue_arr.front){
        printf("Queue is full\n");
        return;
    }
    if(queue_arr.front == -1) queue_arr.rear = queue_arr.front = 0;
    queue_arr.q[queue_arr.rear] = x;
    queue_arr.rear = (queue_arr.rear+1)%10;
}

void dequeue_arr(){
    if(queue_arr.front == -1){
        printf("Queue is underflow\n");
    }
    if(queue_arr.rear == queue_arr.front){
        queue_arr.rear = queue_arr.front = -1;
    }
    else{        
        queue_arr.front = (queue_arr.front + 1)%10;
    }
}

int peek_arr(){
    return queue_arr.q[queue_arr.front];
}

int main(){
    queue.size = 0;
    queue.rear = NULL;
    queue.front = NULL;
    enqueue(2);
    enqueue(3);
    enqueue(9);
    dequeue();
    printf("%d", peek());
    queue_arr.front = -1;
    queue_arr.rear = -1;
    enqueue_arr(10);
    enqueue_arr(20);    
    enqueue_arr(30);
    enqueue_arr(40);
    dequeue_arr();
    dequeue_arr();
    // printf("%d", peek_arr());
}